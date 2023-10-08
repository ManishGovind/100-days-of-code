
/*
The stocks of a company are being surveyed to analyze the net profit of the company over a period.

For an analysis parameter k, an interval of k consecutive months is said to be highly profitable if the values of the stock prices are strictly increasing for those months.Given the stock prices of the company for n months and the analysis parameter k, find the number of highly profitable intervals.

Example

stockPrices = [5, 3, 5, 7, 8]

k = 3

*/
#include <vector>


int count_highly_profitable_intervals(std::vector<int>& stock_prices, int k) {
    int count = 0;
    int n = stock_prices.size();
    int start = 0;
    int increasing_length = 0;

    for (int end = 1; end < n; ++end) {
        if (stock_prices[end] > stock_prices[end - 1]) {
            increasing_length = end - start;
            if (increasing_length >= k - 1) {
                count += 1;
            }
        }
        else {
            start = end;
            increasing_length = 0;
        }
    }

    return count;
}
