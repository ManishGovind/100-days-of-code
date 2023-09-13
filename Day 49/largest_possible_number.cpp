/*
Largest number possible
*/

class Solution {
public:
    string findLargest(int N, int S) {
        if (N > 1 && S == 0) {
            return "-1";
        }
        string res = "";

        int i = 1;
        while (S >= 0 && i <= N) {
            if (S >= 9) {
                res += '9';
                S -= 9;
            }
            else if (S > 0) {
                res = res + to_string(S);
                S = 0;
            }
            else {
                res = res + "0";
            }
            i++;
        }

        if (S > 0) {
            return "-1";
        }
        return res;

    }
};