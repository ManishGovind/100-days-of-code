class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {

        int left_sum = 0;
        int total = 0;

        for (int i = 0; i < nums.size(); i++) {

            total = total + nums[i];

        }
        int right_sum = 0;
        int n = nums.size();
        vector <int> res(n, 0);
        for (int i = 0; i < nums.size(); i++) {
            right_sum = total - nums[i] - left_sum;
            res[i] = (i * nums[i] - left_sum) + (right_sum - (n - i - 1) * nums[i]);
            left_sum = left_sum + nums[i];
        }

        return res;

    }
};