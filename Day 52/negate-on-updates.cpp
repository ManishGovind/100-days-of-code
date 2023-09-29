#include <iostream>
#include <vector>

using namespace std;

vector<int> perform_updates(int n, vector<int>& data, int k, vector<vector<int>>& updates) {
    vector<int> negations(n + 1, 0);

    for (int i = 0; i < k; i++) {
        int l = updates[i][0];
        int r = updates[i][1];
        negations[l - 1] += 1;
        negations[r] -= 1;
    }

    int total_negations = 0;

    for (int i = 0; i < n; i++) {
        total_negations += negations[i];
        if (total_negations % 2 == 1) {
            data[i] = -data[i];
        }
    }

    return data;
}

int main() {
    int n = 5;
    vector<int> data = { 3, 1, 3, 0, 7 };
    int k = 5;
    vector<vector<int>> updates = { {1, 4}, {3, 5}, {1, 4}, {3, 5}, {2, 3} };

    vector<int> final_data = perform_updates(n, data, k, updates);

    for (int val : final_data) {
        cout << val << " ";
    }

    return 0;
}