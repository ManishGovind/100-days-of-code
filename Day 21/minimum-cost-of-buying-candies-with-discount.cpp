class Solution {
public:
    int minimumCost(vector<int>& cost) {
        sort(cost.begin(), cost.end());
        int n = cost.size();
        if (n == 1)return cost[0];
        int i = n - 1;
        int res = 0;
        while (i >= 2)
        {
            res += cost[i] + cost[i - 1];
            i -= 3;
        }
        while (i >= 0)
        {
            res += cost[i];
            i--;
        }
        return res;
    }
};