#include "task_5.h"
#include <unordered_map>
#include <queue>

std::vector<int> topKFrequent(const std::vector<int>& nums, int k) {
    std::unordered_map<int, int> freqMap;
    for (int num : nums) {
        freqMap[num]++;
    }
    std::priority_queue<std::pair<int, int>> maxHeap;
    for (const auto& entry : freqMap) {
        maxHeap.push({entry.second, entry.first});
    }
    std::vector<int> result;
    for (int i = 0; i < k; ++i) {
        result.push_back(maxHeap.top().second);
        maxHeap.pop();
    }

    return result;
}