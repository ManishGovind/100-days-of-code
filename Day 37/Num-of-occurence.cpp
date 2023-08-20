class Solution {
public:
    /* if x is present in arr[] then returns the count
        of occurrences of x, otherwise returns 0. */
    void binary_search(int arr[], int l, int h, int x, int& count) {
        if (l > h) {
            return; // Base case: array is empty or search range is invalid
        }
        int mid = (l + h) / 2;
        if (arr[mid] == x) {
            count++;
            binary_search(arr, mid + 1, h, x, count);
            binary_search(arr, l, mid - 1, x, count);
        }
        else if (arr[mid] > x) {
            binary_search(arr, l, mid - 1, x, count);
        }
        else if (arr[mid] < x) {
            binary_search(arr, mid + 1, h, x, count);
        }
    }

    int count(int arr[], int n, int x) {
        // code here
        int count = 0;
        solve(arr, 0, n - 1, x, count);
        return count;

    }
};