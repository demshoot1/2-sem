#include "solution.h"

Solution::Solution() {}

int Solution::Reverse(int num){
    if (num < 10) return num;
    else{
        int degree = log10(num);
        return num % 10 * pow (10, degree) + Reverse(num / 10);
    }
}
