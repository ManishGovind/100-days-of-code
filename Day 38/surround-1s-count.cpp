class Solution {
public:
    int Count(vector<vector<int> >& matrix) {
        // Code here
        int res = 0;
        int n = matrix.size();
        int m = matrix[0].size();
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                int count = 0;
                if (matrix[i][j] == 1)
                {
                    if (i != 0 && matrix[i - 1][j] == 0)  count++;
                    if (i != n - 1 && matrix[i + 1][j] == 0)  count++;
                    if (j != m - 1 && matrix[i][j + 1] == 0)  count++;
                    if (j != 0 && matrix[i][j - 1] == 0)  count++;
                    if (i != 0 && j != 0 && matrix[i - 1][j - 1] == 0)  count++;
                    if (i != n - 1 && j != 0 && matrix[i + 1][j - 1] == 0)  count++;
                    if (i != 0 && j != m - 1 && matrix[i - 1][j + 1] == 0)  count++;
                    if (i != n - 1 && j != m - 1 && matrix[i + 1][j + 1] == 0)  count++;
                }
                if (count != 0 && count % 2 == 0)  res++;
            }
        }
        return res;


    }
};