class Solution {
public:
    

    long long power(int N, int R)
    {
        int MOD = 1e9 + 7;
        if (R == 0)
            return 1;
        long long ans = power(N, R - 1);
        ans = (ans % MOD * N % MOD) % MOD;
        return ans;

    }

};


class Solution {
public:
    double myPow(double x, int n) {
        if (n == 0) {
            return 1;
        }
        if (n < 0) {
            n = abs(n);
            x = 1 / x;
        }

        double ans = myPow(x, n / 2);
        ans *= ans;
        // ans %= mod;
        if (n % 2 == 1) {
            ans *= x;
            // ans %= mod;
        }
        return ans;
    }
};