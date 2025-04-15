#include "solution.h"

Solution::Solution() {}

QString Solution::hanoi(int n, char from, char mid, char to) {
    if (n == 1) {
        return "Переместить диск 1 с " + QString(from) + " на " + QString(mid) + '\n';
    }

    QString result;
    result += hanoi(n - 1, from, to, mid);
    result += "Переместить диск " + QString::number(n) + " с " + QString(from) + " на " + QString(mid) + '\n';
    result += hanoi(n - 1, to, mid, from);

    return result;
}
