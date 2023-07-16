/*
Given a maze with N cells. Each cell may have multiple entry points but not more than one exit (i.e entry/exit points are unidirectional doors like valves).
You are given an array Edge[] of N integers, where Edge[i] contains the cell index that can be reached from cell i in one step. Edge[i] is -1 if the ith cell doesn't have an exit.
The task is to find the cell with maximum weight (The weight of a cell is the sum of cell indexes of all cells pointing to that cell). If there are multiple cells with the maximum weight return the cell with highest index.

Note: The cells are indexed with an integer value from 0 to N-1. If there is no cell pointing to the ith cell then the weight of the i'th cell is zero.

*/


class Solution
{
public:
    int maxWeightCell(int N, vector<int> Edge)
    {
        

        vector<int> maxweight(N, 0);

        for (int i = 0; i < N; i++) {
            if (Edge[i] >= 0) {
                maxweight[Edge[i]] += i;
            }

        }


        int mx = maxweight[0];
        int mi = 0;
        for (int i = 1; i < N; i++) {
            if (mx <= maxweight[i]) {
                mx = maxweight[i];
                mi = i;
            }
        }
        return mi;

    }
};