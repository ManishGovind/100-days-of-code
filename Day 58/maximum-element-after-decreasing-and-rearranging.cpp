class Solution {
public:
    int maximumElementAfterDecrementingAndRearranging(vector<int>& arr) {
        int next = 1;
        int n = arr.size();
        sort(arr.begin(), arr.end());

        int res = arr[0];
        for (int i = 1; i < arr.size(); i++) {

            if (arr[i] >= next + 1) {

                next++;
            }


        }

        return next;
    }
};