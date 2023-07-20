/*
Given an array of intervals intervals where intervals[i] = [starti, endi], 
return the minimum number of intervals you need to remove to make the rest of the intervals non - overlapping.
*/

bool compareSecondElement(vector<int>& a, vector<int>& b) {
    return a[1] < b[1];
}

class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end(), compareSecondElement);
        int ans = 0;
        int n = intervals.size();

        pair<int, int > prev = { intervals[0][0], intervals[0][1] };
        for (int i = 1; i < intervals.size(); i++) {
            int curr_start = intervals[i][0];
            int curr_end = intervals[i][1];

            if (prev.second > curr_start) {
                ans++;
            }
            else {
                prev.first = curr_start;
                prev.second = curr_end;
            }


        }
        return ans;
    }
};