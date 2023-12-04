#include "task_1.h"
#include <algorithm>

void task_1(std::vector<int>& arr) {
    for (int i = 0; i < arr.size() - 2; ++i) {
        std::vector<int> medians;
        for (int k = 3; k <= arr.size() - i; k += 2) {
            std::vector<int> subarray(arr.begin() + (arr.size() - i - k), arr.begin() + (arr.size() - i));
            std::sort(subarray.begin(), subarray.end());
            medians.push_back(subarray[k / 2]);
        }
        int min_median = *std::min_element(medians.begin(), medians.end());
        arr.erase(std::remove(arr.begin(), arr.end(), min_median), arr.end());
    }
}

int calculate_sum_of_remaining_numbers(const std::vector<int>& arr) {
    int sum_of_remaining_numbers = 0;
    for (int num : arr) {
        sum_of_remaining_numbers += num;
    }
    return sum_of_remaining_numbers;
}