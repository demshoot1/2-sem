#include "solution.h"

Solution::Solution() {}

QString Solution::BinaryRepresentation(double num){
    int integerPartOfNum = (int) num;
    QString intPart = IntegerBinaryRepresentation(integerPartOfNum);
    QString fractPart = FractionalBinaryRepresentation(num - (double)integerPartOfNum);
    if (intPart == "" && fractPart == "") return "0.0";
    else if (intPart == "" && fractPart != "") return "0." + fractPart;
    else if (intPart != "" && fractPart == "") return intPart + ".0";
    else return intPart + "." + fractPart;

}

QString Solution::IntegerBinaryRepresentation(int num){
    if (num == 0) return "";
    else if (num % 2 == 0) return "1" + IntegerBinaryRepresentation(num / 2);
    else return "0" + IntegerBinaryRepresentation(num / 2);
}

QString Solution::FractionalBinaryRepresentation(double num){
    static int count = 0;
    if (1 - num < 0.000001 || num < 0.000001 || count == 30) return "";
    else if (num * 2 - 1.0 > 0.0000001) {
        count++;
        return "1" + FractionalBinaryRepresentation (num * 2 - 1.0);
    }
    else{
        count++;
        return "0" + FractionalBinaryRepresentation (num * 2);
    }
}
