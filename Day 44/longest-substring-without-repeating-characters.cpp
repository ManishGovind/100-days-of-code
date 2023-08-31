class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        int n = s.size();
        int max_len = 0;
        int low = 0, high = 0;
        unordered_map<char, int> mp;

        while (high < n) {
            mp[s[high]]++;
            int window_size = high - low + 1;
            if (mp.size() == window_size) {
                max_len = max(max_len, window_size);
            }
            else if (mp.size() < window_size) {
                while (mp.size() < high - low + 1) {
                    mp[s[low]]--;
                    if (mp[s[low]] == 0) mp.erase(s[low]);
                    low++;
                }
            }
            high++;


        }

        return max_len;
    }
};