#include <vector>
#include <unordered_map>

class Solution {
public:
    std::vector<int> majorityElement(std::vector<int>& nums) {
        std::unordered_map<int, int> counts;
        int n = nums.size();
        int threshold = n / 3;

        for (int num : nums) {
            counts[num]++;
        }

        std::vector<int> result;

        for (const auto& pair : counts) {
            if (pair.second > threshold) {
                result.push_back(pair.first);
            }
        }

        return result;
    }
};
