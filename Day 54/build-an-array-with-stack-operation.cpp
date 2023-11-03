class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {

        vector<string> res;
        stack<int> s1;
        int k = 0;
        for (int i = 1; i <= n; i++) {
            if (k < target.size()) {
                s1.push(i);
                res.push_back("Push");

                if (i != target[k]) {
                    s1.pop();
                    res.push_back("Pop");
                }
                else {
                    k++;
                }
            }


        }

        return res;

    }
};