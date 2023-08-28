class Solution {
public:
    int longestKSubstr(string s, int k) {
        // your code here
        if (k == 0) {
            return 0;
        }

        unordered_map<char, int> char_freq;
        int res = -1;
        int left = 0;

        for (int right = 0; right < s.length(); ++right) {
            if (char_freq.find(s[right]) == char_freq.end()) {
                char_freq[s[right]] = 0;
            }
            char_freq[s[right]] += 1;

            while (char_freq.size() > k) {
                char_freq[s[left]] -= 1;
                if (char_freq[s[left]] == 0) {
                    char_freq.erase(s[left]);
                }
                left += 1;
            }

            if (char_freq.size() == k) {
                res = std::max(res, right - left + 1);
            }
        }

        return res;
    }

};