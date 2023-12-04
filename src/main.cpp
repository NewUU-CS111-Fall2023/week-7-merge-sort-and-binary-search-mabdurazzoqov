/*
 * Author:
Today
Mirzohid
 */

#include <iostream>
#include <cmath>
#include "task_1.h"
#include "task_2.h"
#include "task_3.h"
#include "task_4.h"
#include "task_5.h"
#include "task_6.h"
#include "task_7.h"
#include "task_8.h"
#include "task_9.h"
#include "task_10.h"

int main() {
    std::cout << "Task 1" << std::endl;
    int t;
    std::cin >> t;
    for (int i = 0; i < t; ++i) {
        int n;
        std::cin >> n;
        std::vector<int> arr(n);
        for (int j = 0; j < n; ++j) {
            std::cin >> arr[j];
        }
        task_1(arr);
        std::cout << calculate_sum_of_remaining_numbers(arr) << std::endl;
    }






    std::cout << "Task 2" << std::endl;
    int n;
    std::cin >> n;
    std::vector<int> permutation(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> permutation[i];
    }
    int result = max_beautifulness(permutation);
    std::cout << result << std::endl;






    std::cout << "Task 3" << std::endl;
    int T;
    std::cin >> T;
    for (int t = 0; t < T; ++t) {
        int N, M;
        std::cin >> N >> M;
        std::vector<int> arr1(N);
        for (int i = 0; i < N; ++i) {
            std::cin >> arr1[i];
        }
        std::vector<int> arr2(M);
        for (int i = 0; i < M; ++i) {
            std::cin >> arr2[i];
        }
        std::vector<int> merged = merge_arrays(arr1, arr2);
        for (int num : merged) {
            std::cout << num << " ";
        }

        std::cout << std::endl;
    }




    std::cout << "Task 4" << std::endl;
    int n, k;
    std::cin >> n >> k;
    std::vector<std::vector<int>> matrix(n, std::vector<int>(n));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            std::cin >> matrix[i][j];
        }
    }
    int result = kthSmallest(matrix, k);
    std::cout << result << std::endl;




    std::cout << "Task 5" << std::endl;
    int size;
    std::cin >> size;
    std::vector<int> nums(size);
    for (int i = 0; i < size; ++i) {
        std::cin >> nums[i];
    }
    int k;
    std::cin >> k;
    std::vector<int> result = topKFrequent(nums, k);
    for (int num : result) {
        std::cout << num << " ";
    }




    std::cout << "Task 6" << std::endl;
    int size;
    std::cin >> size;
    std::vector<int> nums(size);
    for (int i = 0; i < size; ++i) {
        std::cin >> nums[i];
    }
    int target;
    std::cin >> target;
    std::pair<int, int> result = searchInsert(nums, target);
    std::cout << result.first << " " << result.second << std::endl;




    std::cout << "Task 7" << std::endl;
    double x;
    int n;
    std::cin >> x >> n;
    double result = recursivePow(x, n);
    std::cout << result << std::endl;




    std::cout << "Task 8" << std::endl;
    int n;
    std::cin >> n;
    std::vector<int> nums(n - 1); 
    for (int i = 0; i < n - 1; ++i) {
        std::cin >> nums[i];
    }
    int result = missingNumber(nums);
    std::cout << result << std::endl;





    std::cout << "Task 9" << std::endl;
    int n, k;
    std::cin >> n >> k;
    std::vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> arr[i];
    }
    int result = findKthPositive(arr, k);
    std::cout << result << std::endl;


    std::cout << "Task 10" << std::endl;
    int n, k;
    std::cin >> n >> k;
    int result = kthFactor(n, k);
    std::cout << result << std::endl;

    return 0;
}
