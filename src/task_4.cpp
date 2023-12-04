#include "task_4.h"

int countLessEqual(const std::vector<std::vector<int>>& matrix, int target) {
    int n = matrix.size();
    int count = 0;
    int row = n - 1;
    int col = 0;

    while (row >= 0 && col < n) {
        if (matrix[row][col] <= target) {
            count += row + 1; 
            ++col; 
        } else {
            --row; 
        }
    }

    return count;
}

int kthSmallest(const std::vector<std::vector<int>>& matrix, int k) {
    int n = matrix.size();
    int left = matrix[0][0];
    int right = matrix[n - 1][n - 1];

    while (left < right) {
        int mid = left + (right - left) / 2;
        int count = countLessEqual(matrix, mid);

        if (count < k) {
            left = mid + 1;
        } else {
            right = mid;
        }
    }

    return left;
}