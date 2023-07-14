/* You are required to complete the function below
*  arr[]: input array
*  n: size of array
*/
class Solution {
public:
    //Function to find triplets with zero sum.
    bool findTriplets(int arr[], int n)
    {
        //Your code here

        sort(arr, arr + n);
        for (int i = 0; i < n; i++)
        {
            int l = i + 1;
            int h = n - 1;
            while (l < h)
            {
                int sum = arr[i] + arr[l] + arr[h];

                if (sum == 0)
                    return true;
                else if (sum > 0)
                    h--;
                else
                    l++;
            }
        }
        return false;
    }
};