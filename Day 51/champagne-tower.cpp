
/*
Approach :  

*/


class Solution {
    public:
        double champagneTower(int poured, int query_row, int query_glass) {

            std::vector<double> prev(1, poured);

            for (int row = 1; row <= query_row; row++) {
                std::vector<double> curr_row(row + 1, 0.0);

                for (int glass = 0; glass < row; glass++) {
                    double overflow = prev[glass] - 1.0;

                    if (overflow > 0) {
                        curr_row[glass] += overflow * 0.5;
                        curr_row[glass + 1] += overflow * 0.5;
                    }
                }

                prev = curr_row;
            }

            return std::min(1.0, prev[query_glass]);
            }
};

