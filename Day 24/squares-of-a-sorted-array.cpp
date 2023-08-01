/*

Given an integer array nums sorted in non-decreasing order, return an array of the squares of each number sorted in non-decreasing order.

*/

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {

        int low = 0;
        int high = nums.size() - 1;
        int j = high;
        vector<int> res(nums.size(), 0);
        while (low <= high) {
            if (abs(nums[low]) >= abs(nums[high])) {
                res[j--] = nums[low] * nums[low];
                low++;
            }
            else {
                res[j--] = nums[high] * nums[high];
                high--;
            }
        }
        return res;
    }
};