class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int> res;

        for (int i = 0; i < (nums.size()) / 2; i++) {
            int fre = nums[2 * i];
            while (fre--) {
                res.push_back(nums[2 * i + 1]);
            }

        }
        return res;


    }
};