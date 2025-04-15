#include "fileprocessing.h"
#include <QDebug>
#include <iostream>
#include <QString>


FileProcessing::FileProcessing()
{

}

bool FileProcessing::setFilePath() {

    isFileOpen = false;

    filePath = QFileDialog::getOpenFileName();

    QFile file(filePath);

    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        return false;
    }
    else {
        QFileInfo check_file(filePath);
        if (check_file.suffix() == "txt") {
            isFileOpen = true;
            setArrTrainTrip();
            if(isNumberRepeated() == false) return false;
        }
        else {
           return false;
        }
    }
    return true;
}

bool FileProcessing::isNumberRepeated() {
    std::vector<QString> arrNumber(arrTrainTrip.size());
    for (unsigned long i = 0; i < arrTrainTrip.size(); i++) {
        arrNumber[i] = arrTrainTrip[i]->getFlightNumber();
    }

    std::sort(arrNumber.begin(), arrNumber.end());
    for (unsigned long i = 1; i < arrNumber.size() ;i++) {
        if(arrNumber[i] == arrNumber[i - 1]) return false;
    }
    qDebug() << "true";
    return true;
}


bool FileProcessing::isNewNumberRepeated(QString newFlightNumber) {
    for (unsigned long i = 0; i < arrTrainTrip.size(); i++) {
        if(newFlightNumber == arrTrainTrip[i]->getFlightNumber()) return false;
    }
    return true;
}

void FileProcessing::setArrTrainTrip() {
    QFile file(filePath);

    if (!file.open(QIODevice::ReadOnly)) {
        qCritical() << "Ошибка открытия файла:" << file.errorString();
        return;
    }

    QTextStream in(&file);
    while (!in.atEnd()) {
        QString line = in.readLine().trimmed();
        if (line.isEmpty()) continue;

        QStringList parts = line.split(',');
        if (parts.size() != 10) {
            qWarning() << "Некорректная строка (ожидается 10 полей):" << line;
            continue;
        }

        TrainTrip* newTrip = new TrainTrip();

        QDateTime departure = QDateTime::fromString(parts[0] + " " + parts[3], "dd.MM.yyyy hh:mm");
        if (!departure.isValid()) {
            qWarning() << "Некорректная дата/время отправления:" << parts[0] << parts[3];
            delete newTrip;
            continue;
        }

        QDateTime arrival = QDateTime::fromString(parts[8] + " " + parts[9], "dd.MM.yyyy hh:mm");
        if (!arrival.isValid()) {
            qWarning() << "Некорректная дата/время прибытия:" << parts[8] << parts[9];
            delete newTrip;
            continue;
        }

        newTrip->setFlightNumber(parts[1]);
        newTrip->setFinalDestination(parts[2]);
        newTrip->setTimeDeparture(departure);
        newTrip->setTimeArrival(arrival);

        bool ok;
        newTrip->setNumberOfCompartmentsSeats(parts[4].toInt(&ok));
        if (!ok) qWarning() << "Ошибка парсинга купейных мест:" << parts[4];

        newTrip->setNumberOfReservedSeats(parts[5].toInt(&ok));
        if (!ok) qWarning() << "Ошибка парсинга плацкартных мест:" << parts[5];

        newTrip->setNumberOfFreeCompartmentsSeats(parts[6].toInt(&ok));
        if (!ok) qWarning() << "Ошибка парсинга свободных купейных:" << parts[6];

        newTrip->setNumberOfFreeReservedSeats(parts[7].toInt(&ok));
        if (!ok) qWarning() << "Ошибка парсинга свободных плацкартных:" << parts[7];

        arrTrainTrip.push_back(newTrip);
    }
    file.close();
}

QString FileProcessing::getFilePath() {
    return filePath;
}


bool FileProcessing::getIsFileOpen() {
    return isFileOpen;
}


QString FileProcessing::getInformationAboutOneTrip(TrainTrip* someTrainTrip) {
    QString textInformation;
    textInformation += "Номер рейса: " + someTrainTrip->getFlightNumber() + '\n';
    textInformation += "Дата и время отправления: " + (someTrainTrip->getTimeDeparture()).toString("dd-MM-yyyy HH:mm") + '\n';
    textInformation += "Дата и время прибытия: " + (someTrainTrip->getTimeArrival()).toString("dd-MM-yyyy HH:mm") + '\n';
    textInformation += "Конечный пункт: " + (someTrainTrip->getFinalDestination()) + '\n';
    textInformation += "Число купейных мест: " + QString::number(someTrainTrip->getNumberOfCompartmentSeats()) + '\n';
    textInformation += "Число плацкартных мест: " + QString::number(someTrainTrip->getNumberOfReservedSeats()) + '\n';
    textInformation += "Число свободных купейных мест: " + QString::number(someTrainTrip->getNumberOfFreeCompartmentSeats()) + '\n';
    textInformation += "Число свободных плацкартных мест: " + QString::number(someTrainTrip->getNumberOfFreeReservedSeats()) + "\n\n";
    return textInformation;
}

bool FileProcessing::isLineQDateTimeCorrect(QString line) {
    if(line[NumberFirstCoordinate].isDigit() && line[NumberSecondCoordinate].isDigit() && line[NumberThirdCoordinate] == '-' && line[NumberForthCoordinate].isDigit() && line[NumberFifthCoordinate].isDigit() && line[NumberSixthCoordinate] == '-' && line[NumberSeventhCoordinate].isDigit() && line[NumberEighthCoordinate].isDigit()&& line[NumberNinthCoordinate].isDigit()&& line[NumberTenthCoordinate].isDigit()&& line[NumberEleventCoordinate] == ' ' && line[NumberTwelvsCoordinate].isDigit() && line[NumberThirdsCoordinate].isDigit() && line[NumberForthCoordinate] == ':' && line[NumberFifteenCoordinate].isDigit()&& line[NumbeSixteenCoordinate].isDigit()) {
        return true;
    }
    else {
      return false;
    }
}


bool FileProcessing::isLineIntegerCorrect(QString line) {
    for(int i = 0; i < line.size(); i++) {
        if(line[i].isDigit() == false) {
           return false;
        }
    }
    return true;
}

bool FileProcessing::checkFlightNumberCorrect(QString line) {
    if (line.isEmpty()) return false;

    bool hasLetters = false;
    bool hasDigits = false;

    for (const QChar& c : line) {
        if (c.isDigit()) {
            hasDigits = true;
        } else if (c.isLetter()) {
            hasLetters = true;
        } else {

            return false;
        }
    }

    return hasLetters && hasDigits;
}

bool FileProcessing::checkIsCorrectFile() {
    QFile file(filePath);

    if (file.open(QIODevice::ReadOnly)) {
          QTextStream in(&file);
          while(!in.atEnd()) {
            QString flightNumber = in.readLine();
            if(checkFlightNumberCorrect(flightNumber) == false) {
                return false;
            }

            QString timeDeparture = in.readLine();
            if(isLineQDateTimeCorrect(timeDeparture) == false){
                return false;
            }

            QString timeArrival = in.readLine();
            if(isLineQDateTimeCorrect(timeArrival) == false) {
                return false;
            }

            QString finalDestination = in.readLine();
            QString numberOfCompartmentsSeats = in.readLine();
            QString numberOfReservedSeats = in.readLine();
            QString numberOfFreeCompartmentsSeats = in.readLine();
            QString numberOfFreeReservedSeats = in.readLine();

            in.readLine();

          }

          return true;
    }
    return false;
}

QString FileProcessing::getTextInformation() {
    QString textInformation;
        if(isSearchDate == 1 && isSearchFinalDestination == 1) {
            for(unsigned long i = 0; i < arrTrainTrip.size(); i++) {
                if(((arrTrainTrip[i]->getTimeDeparture()).date() == searchDate) && (arrTrainTrip[i]->getFinalDestination() == searchFinalDestination)) {
                    textInformation += getInformationAboutOneTrip(arrTrainTrip[i]);
                }
            }
        }
        else if(isSearchDate == 1) {
            for (unsigned long i = 0; i < arrTrainTrip.size(); i++) {
                if((arrTrainTrip[i]->getTimeDeparture()).date() == searchDate) {
                    textInformation += getInformationAboutOneTrip(arrTrainTrip[i]);
                }
            }
        }
        else if(isSearchFinalDestination== 1) {
            for (unsigned long i = 0; i < arrTrainTrip.size(); i++) {
                if(arrTrainTrip[i]->getFinalDestination() == searchFinalDestination) {
                    textInformation += getInformationAboutOneTrip(arrTrainTrip[i]);
                }
            }
        }
        else {
            for (int i = 0; i < arrTrainTrip.size();i++) {
                textInformation += getInformationAboutOneTrip(arrTrainTrip[i]);
            }
        }
    return textInformation;
}

void FileProcessing::setSearchFinalDestination(QString newSearchFinalDestination) {
    searchFinalDestination = newSearchFinalDestination;
    isSearchFinalDestination = true;
}

void FileProcessing::setSearchDate(QDate newSearchDate) {
    searchDate = newSearchDate;
    isSearchDate = true;
}

QString FileProcessing::getAllFile() {
    QString textInformation = "";
    for(unsigned long i = 0; i < arrTrainTrip.size(); i++) {
        textInformation += arrTrainTrip[i]->getFlightNumber() + '\n';
        textInformation += (arrTrainTrip[i]->getTimeDeparture()).toString("dd-MM-yyyy HH:mm") + '\n';
        textInformation += (arrTrainTrip[i]->getTimeArrival()).toString("dd-MM-yyyy HH:mm") + '\n';
        textInformation += (arrTrainTrip[i]->getFinalDestination()) + '\n';
        textInformation += QString::number(arrTrainTrip[i]->getNumberOfCompartmentSeats()) + '\n';
        textInformation += QString::number(arrTrainTrip[i]->getNumberOfReservedSeats()) + '\n';
        textInformation += QString::number(arrTrainTrip[i]->getNumberOfFreeCompartmentSeats()) + '\n';
        textInformation += QString::number(arrTrainTrip[i]->getNumberOfFreeReservedSeats()) + "\n\n";
    }
    return textInformation;
}

void FileProcessing::saveFileAtFinishWork() {
    QFile file(filePath);
        if (file.open(QIODevice::WriteOnly | QIODevice::Text))
        {
            QTextStream out(&file);
            out << getAllFile();
            closeFile();
            file.close();
        }
}

void FileProcessing::closeFile() {
    isSearchDate = false;
    searchFinalDestination = "";
    isSearchFinalDestination = false;
    arrTrainTrip.clear();
    filePath = "";
    isFileOpen = false;
}

void FileProcessing::setCanselAllSearchInformation() {
    isSearchDate = false;
    isSearchFinalDestination = false;
}

bool FileProcessing::deleteTrainTrip(QString deleteFlightNumber) {
    for (unsigned long i = 0; i < arrTrainTrip.size(); i++) {
        if(arrTrainTrip[i]->getFlightNumber() == deleteFlightNumber) {
            arrTrainTrip.erase(arrTrainTrip.begin() + i);
            return true;
            break;
        }
    }
    return false;
}

int FileProcessing::addNewTrainTrip(QString flightNumber, QDateTime timeDeparture, QDateTime timeArrival,
                                    QString finalDestination, int numberOfCompartmentsSeats, int numberOfReservedSeats,
                                    int numberOfFreeCompartmentsSeats, int numberOfFreeReservedSeats) {

    if(!checkFlightNumberCorrect(flightNumber)) return -1;
    if(!checkDatesCorrect(timeDeparture, timeArrival)) return -2;
    if(!checkFinalDestinationCorrect(finalDestination)) return -3;
    if(numberOfCompartmentsSeats <= 0 || numberOfReservedSeats <= 0) return -4;

    bool isExistingTrip = false;
    for(auto trip : arrTrainTrip) {
        if(trip->getFlightNumber() == flightNumber) {
            isExistingTrip = true;
            break;
        }
    }
    if(!isExistingTrip && isNewNumberRepeated(flightNumber)) return -5;

    for(auto& trip : arrTrainTrip) {
        if(trip->getFlightNumber() == flightNumber) {
            trip->setTimeDeparture(timeDeparture);
            trip->setTimeArrival(timeArrival);
            trip->setFinalDestination(finalDestination);
            trip->setNumberOfCompartmentsSeats(numberOfCompartmentsSeats);
            trip->setNumberOfReservedSeats(numberOfReservedSeats);
            trip->setNumberOfFreeCompartmentsSeats(numberOfFreeCompartmentsSeats);
            trip->setNumberOfFreeReservedSeats(numberOfFreeReservedSeats);
            return 1;
        }
    }

    TrainTrip* newTrip = new TrainTrip();
    newTrip->setFlightNumber(flightNumber);
    newTrip->setTimeDeparture(timeDeparture);
    newTrip->setTimeArrival(timeArrival);
    newTrip->setFinalDestination(finalDestination);
    newTrip->setNumberOfCompartmentsSeats(numberOfCompartmentsSeats);
    newTrip->setNumberOfReservedSeats(numberOfReservedSeats);
    newTrip->setNumberOfFreeCompartmentsSeats(numberOfFreeCompartmentsSeats);
    newTrip->setNumberOfFreeReservedSeats(numberOfFreeReservedSeats);

    arrTrainTrip.push_back(newTrip);
    return 2;
}

bool FileProcessing::checkDatesCorrect(QDateTime timeDeparture, QDateTime timeArrival) {
    if(timeArrival > timeDeparture) {
        return true;
    }
    else return false;
}

bool FileProcessing::checkFinalDestinationCorrect(QString line) {
        if (line.isEmpty()) return false;
        if (!line[0].isUpper()) return false;
        int ptr = 0;

        while (ptr < line.size() && line[ptr].isLetter()) {
            ptr++;
        }

        if (ptr == 0) return false;

        return (ptr == line.size());
}

