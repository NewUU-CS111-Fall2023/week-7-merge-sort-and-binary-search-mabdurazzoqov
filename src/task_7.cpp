#include "task_7.h"

double recursivePow(double x, int n) {
    // Base case: x^0 = 1
    if (n == 0) {
        return 1.0;
    }
    return x * recursivePow(x, n - 1);
}