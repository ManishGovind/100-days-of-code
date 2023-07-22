/*

You are given an integer num.You can swap two digits at most once to get the maximum valued number.

Return the maximum valued number you can get.
*/

class Solution {
public:
    int maximumSwap(int num) {

        string str = to_string(num);

        int n = str.size();
        for (int i = 0; i < n; i++)
        {
            char mx = str[i];
            int mxi = i;
            for (int j = i + 1; j < n; j++)
            {
                if (str[j] >= mx)
                {
                    mx = str[j];
                    mxi = j;
                }
            }
            if (mx > str[i])
            {
                swap(str[i], str[mxi]);

                break;
            }
        }

        return stoi(str);
    }
};