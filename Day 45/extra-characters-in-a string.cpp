extra-characters-in-a-string

/*
You are given a 0 - indexed string s and a dictionary of words dictionary.You have to break s into one or more non - overlapping substrings such that each substring is present in dictionary.There may be some extra characters in s which are not present in any of the substrings.

Return the minimum number of extra characters left over if you break up s optimally
*/


// Approach 1: DP iterate over all substrings and check if it is present in dictionary or not
// Time: O(n^2)
// Space: O(n)

class Solution {
public:
    int minExtraChar(string s, vector<string> dictionary) {
        int n = s.length();
        unordered_set<string> set(dictionary.begin(), dictionary.end());
        vector<int> dp(n + 1, 0);

        for (int start = n - 1; start >= 0; start--) {
            dp[start] = dp[start + 1] + 1;
            for (int end = start; end < n; end++) {
                auto curr = s.substr(start, end - start + 1);
                if (set.count(curr)) {
                    dp[start] = min(dp[start], dp[end + 1]);
                }
            }
        }

        return dp[0];
    }
};