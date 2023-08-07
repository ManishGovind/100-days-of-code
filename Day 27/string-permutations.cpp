class Solution {
public:
    //Complete this function

    void backtrack(string& s, int start, vector<string>& res) {
        if (start == s.size()) {
            res.push_back(s);
            return;
        }

        for (int i = start; i < s.size(); i++) {
            swap(s[start], s[i]);
            backtrack(s, start + 1, res);
            swap(s[start], s[i]);
        }
    }
    vector<string> permutation(string S)
    {
        //Your code here
        vector<string> res;
        backtrack(S, 0, res);
        sort(res.begin(), res.end());
        return res;
    }
};