

class Solution
{
public:
    //Function to find minimum number of operations that are required 
    //to make the matrix beautiful.
    int findMinOpeartion(vector<vector<int> > matrix, int n)
    {
        // code here 
        int res = 0;
        int max_sum = 0;
        vector<int> row_sum(n, 0);
        vector<int> col_sum(n, 0);

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                row_sum[i] += matrix[i][j];
                col_sum[i] += matrix[j][i];
            }

            if (max_sum < row_sum[i]) {
                max_sum = row_sum[i];

            }


            if (max_sum < col_sum[i]) {
                max_sum = col_sum[i];
            }
        }


        for (int i = 0; i < n; i++) {
            res += max_sum - row_sum[i];
        }

        return res;
    }
};