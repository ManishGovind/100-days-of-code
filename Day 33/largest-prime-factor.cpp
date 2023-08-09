class Solution {
public:
    long long int largestPrimeFactor(int N) {
        // code here
        int res;
        for (int i = 2; i * i <= N; i++)
        {
            if (N % i == 0)
            {
                res = i;
                while (N % i == 0)
                {
                    N /= i;
                }
            }
        }
        if (N > 1)
        {
            res = max(res, N);

        }
        return res;



    }
};