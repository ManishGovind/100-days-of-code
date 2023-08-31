class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) {
            return "";
        }

        string res = "";
        int minLength = INT_MAX;

        // Find the length of the shortest string in the vector
        for (const string& s : strs) {
            minLength = min(minLength, (int)s.size());
        }

        for (int i = 0; i < minLength; i++) {
            char c = strs[0][i];
            for (const string& s : strs) {
                if (s[i] != c) {
                    return res;
                }
            }
            res += c;
        }

        return res;
    }
};