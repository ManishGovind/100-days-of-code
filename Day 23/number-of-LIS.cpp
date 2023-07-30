class Solution {
public:
    int findNumberOfLIS(vector<int>& nums) {
        unordered_map<int, pair<int, int>> freqEnd;
        for (int num : nums) {
            int count = 0, len = 0;
            for (auto& [end, val] : freqEnd) {
                if (end < num) {
                    if (val.second == len) {
                        count += val.first;
                    }
                    else if (val.second > len) {
                        count = val.first;
                        len = val.second;
                    }
                }
            }
            if (len == 0) {
                if (freqEnd[num].second == 1) {
                    freqEnd[num].first++;
                }
                else if (freqEnd[num].second == 0) {
                    freqEnd[num] = { 1, 1 };
                }
            }
            else if (freqEnd[num].second < len + 1) {
                freqEnd[num] = { count, len + 1 };
            }
            else if (freqEnd[num].second == len + 1) {
                freqEnd[num].first += count;
            }
        }
        int ans = 0, len = 0;
        for (auto& [end, val] : freqEnd) {
            if (val.second > len) {
                len = val.second;
                ans = val.first;
            }
            else if (val.second == len) {
                ans += val.first;
            }
        }
        return ans;
    }
};