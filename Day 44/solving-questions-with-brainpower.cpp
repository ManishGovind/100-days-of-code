class Solution {
public:
    long long mostPoints(vector<vector<int>>& questions) {
        int n = questions.size();
        vector<long long > dp(n + 1, 0);
        dp[n] = 0;
        for (int i = n - 1; i >= 0; i--) {
            long long res = 0;
            // If it is exceding the n, then we will not include it.
            if (i + questions[i][1] + 1 <= n) {
                res = dp[i + questions[i][1] + 1];
            }
            // maximun of skip, solved
            dp[i] = max(dp[i + 1], questions[i][0] + res);
        }

        return dp[0];

    }
};