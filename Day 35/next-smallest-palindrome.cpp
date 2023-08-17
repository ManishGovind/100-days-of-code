class Solution {
public:

    bool isallnine(int s[], int n)
    {
        for (int i = 0; i < n; ++i) if (s[i] != 9) return 0;
        return 1;
    }
    bool isless(int s[], int len)
    {
        int i = (len - 1) / 2, j = len / 2;
        while (i >= 0)
        {
            if (s[i] < s[j]) return 1;
            else if (s[i] > s[j]) return 0;
            --i, ++j;
        }
        return 1;
    }
    vector<int> generateNextPalindrome(int s[], int n) {
        if (isallnine(s, n))
        {
            vector<int> ans(n + 1, 0);
            ans[0] = ans[n] = 1;
            return ans;
        }
        vector<int> ans(s, s + n);
        int i = (n - 1) / 2, j = n / 2, carry = isless(s, n);
        while (i >= 0)
        {
            if (carry)
            {
                if (ans[i] == 9)ans[i] = 0;
                else ans[i]++, carry = 0;
            }
            ans[j++] = ans[i--];
        }
        return ans;
    }
};