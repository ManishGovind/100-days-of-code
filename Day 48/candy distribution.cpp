/*
135. Candy
Hard
Problem statement:
    There are n children standing in a line. Each child is assigned a rating value given in the integer array ratings.

Approach : Greedy 
	1. Give 1 candy to each child.
	2. Traverse from left to right and give 1 more candy to the child if his rating is greater than the previous child.
	3. Traverse from right to left and give 1 more candy to the child if his rating is greater than the next child.
	4. Return the sum of candies given to each child.
*/


class Solution {
public:
    int candy(std::vector<int>& ratings) {
        int n = ratings.size();
        vector<int> candies(n, 1);

        for (int i = 1; i < n; ++i) {
            if (ratings[i] > ratings[i - 1]) {
                candies[i] = candies[i - 1] + 1;
            }
        }

        for (int i = n - 2; i >= 0; --i) {
            if (ratings[i] > ratings[i + 1]) {
                candies[i] = max(candies[i], candies[i + 1] + 1);
            }
        }

        int totalCandies = 0;
        for (int candy : candies) {
            totalCandies += candy;
        }

        return totalCandies;
    }
};