#include <cstdint>
#include "alg.h"

double pown(double value, uint16_t n) {
    double ans = value;
    for (uint64_t i = 2; i <= n; i++)
        ans *= value;
    return ans;
}

uint64_t fact(uint16_t n) {
    uint64_t ans = 1;
    for (uint64_t i = 2; i <= n; i++)
        ans *= i;
    return ans;
}

double calcItem(double x, uint16_t n) {
    return pown(x, n) / fact(n);
}

double expn(double x, uint16_t count) {
    double ans = 1;
    for (uint64_t i = 1; i <= count; i++)
        ans += calcItem(x, i);
    return ans;
}

double sinn(double x, uint16_t count) {
    double ans = x;
    for (uint64_t i = 2; i <= count; i++)
        ans += pown(-1, i - 1) * calcItem(x, 2 * i - 1);
    return ans;
}

double cosn(double x, uint16_t count) {
    double ans = 1;
    for (uint64_t i = 2; i <= count; i++)
        ans += pown(-1, i - 1) * calcItem(x, 2 * i - 2);
    return ans;
}
