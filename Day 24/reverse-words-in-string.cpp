class Solution
{
public:
    //Function to reverse words in a given string.
    string reverseWords(string S)
    {
        string temp = "", res = "";
        int n = S.size();
        for (int i = n - 1; i >= 0; i--) {

            if (S[i] == '.') {
                res = res + S[i];
                temp = temp + res;
                res = "";
            }
            else {
                res = S[i] + res;
            }
        }
        temp += res;
        return temp;
    }
};