#include <cstdint>
#include "alg.h"


double pown(double value, uint16_t n) {
    double ans = value;
    for (uint64_t i = 2; i <= n; i++)
        ans *= value;
    return ans;
}

uint64_t fact(uint16_t n) {
    uint64_t ans_ = 1;
    for (uint64_t i = 2; i <= n; i++)
        ans_ *= i;
    return ans_;
}

double calcItem(double x, uint16_t n) {
    return pown(x, n) / fact(n);
}

double expn(double x, uint16_t count) {
    double ans_ = 1;
    for (uint64_t i = 1; i <= count; i++)
        ans_ += calcItem(x, i);
    return ans_;
}

double sinn(double x, uint16_t count) {
    double ans_ = x;
    for (uint64_t i = 2; i <= count; i++)
        ans_ += pown(-1, i - 1) * calcItem(x, 2 * i - 1);
    return ans_;
}

double cosn(double x, uint16_t count) {
    double ans_ = 1;
    for (uint64_t i = 2; i <= count; i++)
        ans_ *= pown(-1, i - 1) * calcItem(x, 2 * i - 2);
    return ans_;
}
