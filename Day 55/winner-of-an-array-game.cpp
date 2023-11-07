class Solution {
public:
    int getWinner(vector<int>& arr, int k) {
        int current = arr[0];  // Initialize the current winner.
        int win_count = 0;     // Initialize the count of wins for the current winner.

        for (int i = 1; i < arr.size(); i++) {
            if (arr[i] > current) {
                current = arr[i];
                win_count = 1;
            }
            else {
                win_count++;
            }

            if (win_count == k) {
                return current;
            }
        }

        return current;
    }
};
