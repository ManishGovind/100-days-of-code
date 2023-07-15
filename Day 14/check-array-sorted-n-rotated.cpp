// check if array is sorted and rotated


//if the array has less that 2 break points then it true other wise the array is not rotated or sorted        
class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        int brk = 0;
        for (int i = 0; i < n - 1; i++) {
            if (nums[i] > nums[i + 1]) {
                brk++;
            }
        }
        if (nums[n - 1] > nums[0])brk++;
        return brk <= 1;
    }
};