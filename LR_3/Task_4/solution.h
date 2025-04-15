#ifndef SOLUTION_H
#define SOLUTION_H
#include <QString>

class Solution
{
public:
    Solution();
    QString static hanoi(int n, char from, char mid, char to);
};

#endif // SOLUTION_H
