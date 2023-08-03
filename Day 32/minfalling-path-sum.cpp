class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int dp[n][n];
        for (int i = 0; i < n; i++) {
            dp[0][i] = matrix[0][i];
        }
        for (int i = 1; i < n; i++) {
            for (int j = 0; j < n; j++) {
                int ans = dp[i - 1][j];
                if (j > 0) ans = min(ans, dp[i - 1][j - 1]);
                if (j < n - 1) ans = min(ans, dp[i - 1][j + 1]);
                dp[i][j] = matrix[i][j] + ans;
            }
        }
        int res = dp[n - 1][0];
        for (int i = 1; i < n; i++) {
            res = min(res, dp[n - 1][i]);
        }

        return res;
    }
};