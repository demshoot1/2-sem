#include "solution.h"

Solution::Solution() {}

int Solution::AccermanFunction(int m, int n){
    if (m > 0 && n > 0) return AccermanFunction(m - 1, AccermanFunction(m, n - 1));
    else if (m > 0 && n == 0) return AccermanFunction(m - 1, 1);
    else return n + 1;
}
