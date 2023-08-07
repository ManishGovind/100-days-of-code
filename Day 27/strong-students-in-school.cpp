//User function Template for C++

/*

In Peculiar School, students are admitted based on their strength. The strength of n students is given to you in the form of an array arr. The PT teacher wants to analyse 2 sets of m students. Help him find the maximum possible difference between the sum of strengths of students in the two groups.

Note: One student can be a part of more than one group.
*/

class Solution {
public:
    int diffSum(int n, int m, int arr[])
    {
        sort(arr, arr + n);

        long long ans = 0;

        for (int i = 0; i < m; i++) ans += arr[n - 1 - i] - arr[i];

        return ans;
    }
};