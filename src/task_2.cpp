#include "task_2.h"
#include <algorithm>

int max_beautifulness(const std::vector<int>& permutation) {
    int n = permutation.size();
    int beautifulness = 0;

    for (int i = 0; i < n; ++i) {
        beautifulness += std::abs(permutation[i] - (i + 1));
    }

    int max_swap_beautifulness = 0;
    for (int i = 0; i < n - 1; ++i) {
        int swap_beautifulness = beautifulness;
        std::swap(permutation[i], permutation[i + 1]);
        for (int j = i; j <= i + 1; ++j) {
            swap_beautifulness -= std::abs(permutation[j] - (j + 1));
            swap_beautifulness += std::abs(permutation[j] - i);
        }
        max_swap_beautifulness = std::max(max_swap_beautifulness, swap_beautifulness);
        std::swap(permutation[i], permutation[i + 1]);
    }

    return beautifulness + max_swap_beautifulness;
}