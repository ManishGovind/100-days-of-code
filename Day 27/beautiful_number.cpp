class Solution {
public:
    bool beautifulNumber(int n) {
        // code here
        vector<int> seen;
        while (true) {
            int sum = 0;
            while (n != 0) {
                int re = n % 10;
                sum += re * re;
                n = n / 10;
            }

            if (sum == 1)return true;
            else {
                if (find(seen.begin(), seen.end(), sum) != seen.end())
                    break;
                else {
                    seen.push_back(sum);
                    n = sum;
                }
            }



        }
        return false;


    }
};