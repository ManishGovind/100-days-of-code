class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        // std::ios_base::sync_with_stdio(false);
        // std::cin.tie(0);
        // std::cout.tie(0);
        // std::cerr.tie(0);

        int n = nums.size();
        int res = abs(nums[0]);
        int mx = nums[0];
        int mn = nums[0];

        for (int i = 1; i < n; i++) {
            mx = max(nums[i], mx + nums[i]);
            mn = min(mn + nums[i], nums[i]);

            res = max(res, max(abs(mx), abs(mn)));
        }

        return res;

    }
};