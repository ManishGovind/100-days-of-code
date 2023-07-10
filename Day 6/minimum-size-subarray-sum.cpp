class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int slen = INT_MAX;
        int temp = 0;

        int j = 0;

        for (int i = 0; i < nums.size(); i++) {
            temp += nums[i];

            while (temp >= target) {
                slen = min(slen, i - j + 1);
                temp -= nums[j];
                j++;
            }
        }
        return slen < INT_MAX ? slen : 0;
    }
};