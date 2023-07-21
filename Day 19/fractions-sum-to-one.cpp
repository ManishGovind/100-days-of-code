//User function Template for C++
class Solution
{

    int gcd(int a, int b) {

        if (a == 0)
            return b;
        return gcd(b % a, a);
    }


public:
    int countFractions(int n, int numerator[], int denominator[])
    {
        map<pair<int, int>, int> mp;
        int count = 0;
        for (int i = 0; i < n; i++) {
            int k = gcd(numerator[i], denominator[i]);
            int num = numerator[i] / k;
            int den = denominator[i] / k;
            int counter_num = den - num;
            count += mp[{counter_num, den}];
            mp[{num, den}] += 1;
        }
        return count;
    }
};