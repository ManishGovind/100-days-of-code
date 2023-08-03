class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
        unordered_map<int, int> mp;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size(); i++) {
            mp[nums[i]] += nums[i];
        }

        int su1 = 0, su2 = 0;

        for (auto it : mp) {

            int temp = max(su1 + it.second, su2);
            su1 = su2;
            su2 = temp;

        }
        return su2;

    }
};