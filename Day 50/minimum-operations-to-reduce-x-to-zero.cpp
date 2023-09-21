class Solution {
public:
    int minOperations(vector<int>& nums, int x) {

        int sum = accumulate(nums.begin(), nums.end(), 0);
        sum = sum - x;
        int curr_sum = 0;
        int left = 0;
        int cnt = INT_MAX;
        int right = 0;
        int n = nums.size();
        while (right < n) {
            curr_sum += nums[right];
            while (curr_sum > sum and left <= right) {
                curr_sum = curr_sum - nums[left];
                left++;
            }
            if (curr_sum == sum) {
                cnt = min(cnt, n - right + left - 1);
            }
            right++;

        }

        if (cnt == INT_MAX) return -1;


        return cnt;
    }
};