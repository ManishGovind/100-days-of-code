
/*
You are given a list of operations as a vector of strings operations where each operation has length 1. operations[i] = "push" or "pop" denotes the ith operation performed.
*/

#include <iostream>
#include <vector>
#include <queue>

using namespace std;

vector<int> maxMin(vector<string> operations, vector<int> x) {
    vector<int> result;
    priority_queue<int> minHeap;  // Priority queue for minimum values
    priority_queue<int> maxHeap;  // Priority queue for maximum values (negated)

    for (int i = 0; i < operations.size(); i++) {
        if (operations[i] == "push") {
            minHeap.push(x[i]);
            maxHeap.push(-x[i]);  // Use negative values for maxHeap
        }
        else if (operations[i] == "pop") {
            // Find and remove the value x[i] from minHeap and maxHeap
            priority_queue<int> tempMinHeap, tempMaxHeap;

            while (!minHeap.empty()) {
                if (minHeap.top() != x[i]) {
                    tempMinHeap.push(minHeap.top());
                }
                minHeap.pop();
            }

            while (!maxHeap.empty()) {
                if (maxHeap.top() != -x[i]) {
                    tempMaxHeap.push(maxHeap.top());
                }
                maxHeap.pop();
            }

            minHeap = tempMinHeap;
            maxHeap = tempMaxHeap;
        }

        // Calculate and store the product of min and max
        if (!minHeap.empty() && !maxHeap.empty()) {
            int min_value = minHeap.top();
            int max_value = -maxHeap.top();  // Get the maximum value (negated)
            result.push_back(min_value * max_value);
        }
        else {
            // If either heap is empty, push -1 as the result
            result.push_back(-1);
        }
    }

    return result;
}

int main() {
    vector<string> operations = { "push", "push", "push", "pop" };
    vector<int> x = { 1, 19, 2, 1 };

    vector<int> result = maxMin(operations, x);

    for (int val : result) {
        cout << val << " ";
    }

    return 0;
}
