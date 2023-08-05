class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        int n = s.size();
        vector<bool> dp(n + 1);
        dp[n] = true;
        for (int i = n - 1; i >= 0; i--) {
            for (string word : wordDict) {
                int lw = word.size();
                if ((i + lw <= n) and s.substr(i, lw) == word) {
                    dp[i] = dp[i + lw];
                }
                if (dp[i]) {
                    break;
                }
            }
        }
        return dp[0];

    }
};