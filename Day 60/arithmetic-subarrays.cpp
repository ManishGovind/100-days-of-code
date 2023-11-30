class Solution {
public:

    bool check(int low, int high, vector<int> nums) {

        sort(nums.begin() + low, nums.begin() + high + 1);


        int d = nums[low + 1] - nums[low];
        for (int j = low + 1; j <= high; j++) {

            if (nums[j] - nums[j - 1] != d) {
                return false;
            }

        }
        return true;

    }
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        int n = l.size();
        vector<bool> res;

        for (int i = 0; i < n; i++) {
            //cout << l[i] << r[i] << endl;
            res.push_back(check(l[i], r[i], nums));
        }

        return res;
    }
};