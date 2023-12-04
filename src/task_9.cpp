#include "task_9.h"

int findKthPositive(const std::vector<int>& arr, int k) {
    int missingCount = 0;
    int currentNum = 1;

    for (int num : arr) {
        while (currentNum < num) {
            missingCount++;
            if (missingCount == k) {
                return currentNum;
            }
            currentNum++;
        }
        currentNum++;
    }
    while (missingCount < k) {
        currentNum++;
        missingCount++;
    }

    return currentNum - 1;
}