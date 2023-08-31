class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
        int low = 0, high = 1, res = 0;

        unordered_set<int> s;
        for (int i : nums) s.insert(i);

        while (high < nums.size()) {
            if (nums[high] - nums[low] == 2 * diff && s.count(diff + nums[low])) res++;
            if (nums[high] - nums[low] < 2 * diff) high++;
            else low++;
        }

        return res;
    }
};