

/*
Problem
Description:
Given an integer array with all positive numbers and no duplicates, find the number of possible combinations that add up to a positive integer target.

*/

class Solution {
public:
    int combinationSum4(vector<int>& nums, int target) {
        unsigned long dp[target + 1];
        dp[0] = 1;
        for (int i = 1; i <= target; i++) {
            dp[i] = 0;
            for (int num : nums) {
                if (i - num >= 0) {
                    dp[i] += dp[i - num];
                }
            }
        }
        return dp[target];
    }
};