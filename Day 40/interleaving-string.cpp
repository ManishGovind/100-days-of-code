class Solution {
public:
    bool isInterleave(string s1, string s2, string s3) {
        int n = s1.length();
        int m = s2.length();
        if (s1.length() + s2.length() != s3.length()) return false;
        bool dp[n + 1][m + 1];
        for (int i = 0; i <= n; ++i) {
            for (int j = 0; j <= m; ++j) {
                dp[i][j] = false;
            }
        }

        dp[n][m] = true;

        for (int i = n; i >= 0; i--) {
            for (int j = m; j >= 0; j--) {

                if (i < n && s1[i] == s3[i + j] && dp[i + 1][j]) {
                    dp[i][j] = true;
                }

                if (j < m && s2[j] == s3[i + j] && dp[i][j + 1]) {
                    dp[i][j] = true;
                }
            }
        }

        return dp[0][0];
    }
};
