class Solution {
public:
    int maxVowels(string s, int k) {
        string vowels = "aeiou";

        int res = 0;
        int cnt = 0;

        for (int i = 0; i < k; i++) {
            if (vowels.find(s[i]) != string::npos) {
                cnt++;
            }
        }

        res = cnt;

        for (int i = k; i < s.length(); i++) {
            if (vowels.find(s[i - k]) != string::npos) {
                cnt--;
            }
            if (vowels.find(s[i]) != string::npos) {
                cnt++;
            }

            res = max(res, cnt);
        }

        return res;
    }
};
