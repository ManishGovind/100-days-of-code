class Solution {
public:
    string reverseWords(string s) {

        string res = "";
        string temp = "";
        for (int i = 0; i < s.size(); i++) {

            if (s[i] == ' ') {
                reverse(res.begin(), res.end());
                res += s[i];
                temp += res;
                res = "";
            }
            else {
                res += s[i];
            }



        }
        reverse(res.begin(), res.end());
        temp += res;
        res = "";

        return temp;
    }
};