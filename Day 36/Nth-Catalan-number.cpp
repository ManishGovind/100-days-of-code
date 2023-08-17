/*

Base condition for the recursive approach, when n <= 1, return 1
Iterate from i = 0 to i < n
Make a recursive call catalan(i) and catalan(n – i – 1) and keep adding the product of both into res.
Return the res.
*/ 


class Solution
{
public:
    //Function to find the nth catalan number.
    int findCatalan(int n)
    {
        // base case 
        if (n == 0) {
            return 1;
        }
        int mod = 1e9 + 7;
        vector<long long>dp(n + 1, 0);
        dp[0] = 1;
        dp[1] = 1;
        for (int i = 2; i <= n; i++) {
            dp[i] = 0;
            for (int j = 0; j < i; j++) {
                dp[i] = (dp[i] + (dp[j] * dp[i - j - 1]) % mod) % mod;
            }
        }
        return dp[n];

    }
};