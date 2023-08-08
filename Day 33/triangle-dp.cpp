class Solution {
public:
     int dfs(int i, int j, int n, vector<vector<int>>& triangle, vector<vector<int>>& dp) {
         if (i == n) return 0;
         if (dp[i][j] != -1) return dp[i][j];

         int lower_left = triangle[i][j] + dfs(i + 1, j, n, triangle, dp);
         int lower_right = triangle[i][j] + dfs(i + 1, j + 1, n, triangle, dp);
         dp[i][j] = min(lower_left, lower_right);

         return dp[i][j];
     }
     int minimumTotal(vector<vector<int>>& triangle) {
         int n = triangle.size();
         vector<vector<int>> dp(n, vector<int>(n, -1));
         return dfs(0, 0, n, triangle, dp);
     }

    // another approach
    int minimumTotal(vector<vector<int>>& triangle) {
        for (int i = triangle.size() - 2; i >= 0; i--) {
            for (int j = 0; j <= i; j++) {
                triangle[i][j] += min(triangle[i + 1][j], triangle[i + 1][j + 1]);
            }
        }
        return triangle[0][0];
    }
};