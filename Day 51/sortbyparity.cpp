class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        // Index to track the position of the next even element
        int evi = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] % 2 == 0) {
                // Swap the current element with the next available even-indexed position
                swap(nums[i], nums[evi++]);
            }
        }


        return nums;
    }
};