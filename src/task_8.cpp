#include "task_8.h"

int missingNumber(const std::vector<int>& nums) {
    int expectedSum = (nums.size() + 1) * nums.size() / 2;
    int actualSum = 0;
    for (int num : nums) {
        actualSum += num;
    }
    return expectedSum - actualSum;
}