#include "task_3.h"
#include <algorithm>

std::vector<int> merge_arrays(const std::vector<int>& arr1, const std::vector<int>& arr2) {
    std::vector<int> result;
    int i = 0, j = 0;
    while (i < arr1.size() && j < arr2.size()) {
        if (arr1[i] >= arr2[j]) {
            result.push_back(arr1[i]);
            ++i;
        } else {
            result.push_back(arr2[j]);
            ++j;
        }
    }

    while (i < arr1.size()) {
        result.push_back(arr1[i]);
        ++i;
    }
    while (j < arr2.size()) {
        result.push_back(arr2[j]);
        ++j;
    }

    return result;
}