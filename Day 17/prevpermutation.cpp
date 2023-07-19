
/*
 Given a string s, find lexicographically previous permutation of it.
For example : Lexicographically previous permutation of “4321” is “4312". If the string is sorted in ascending order, then the lexicographically previous permutation doesn’t exist.
*/ 

class Solution {
public:
    string prevPermutation(string s) {
        if (s.length() == 1)
            return s;
        for (int i = s.length() - 2; i >= 0; i--)
        {  //  Find largest index i such that s[i] > s[i+1]. If no such index exists, the permutation is the last permutation.
            if (s[i] > s[i + 1]) // change this to <= to get next permutation
            {
                for (int j = s.length() - 1; j > i; j--)
                {   // Find largest index j such that j ? i and s[j] < s[i].
                    if (s[i] > s[j]) //change this to <= to get next permutation
                    {
                        swap(s[j], s[i]);
                        reverse(s.begin() + i + 1, s.end());
                        return s;
                    }
                }
            }
        }
        return "None";
    }
};