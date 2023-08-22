/*

Given a string s, check if it can be constructed by taking a substring of it and appending multiple copies of the substring together.
*/

class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        string t = s + s;
        if (t.substr(1, t.size() - 2).find(s) != -1) return true;
        return false;
    }
};