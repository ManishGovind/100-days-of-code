class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n = nums.size();
        deque<int> q;//Double-ended queue storing index for max
        vector<int> res(n - k + 1);

        for (int i = 0; i < n; i++) {
            while (!q.empty() && nums[i] >= nums[q.back()])
                q.pop_back();// pop back the indexes for smaller ones
            q.push_back(i);  // push back the index for larger one

            if (q.front() == i - k) // index=i-k should not in the window
                q.pop_front();
            if (i >= k - 1)
                res[i - k + 1] = nums[q.front()]; //Max element for this window
        }
        return res;
    }
};