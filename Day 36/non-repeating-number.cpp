class Solution
{
public:
    vector<int> singleNumber(vector<int> nums)
    {
        unordered_map<int, int>mp;
        vector<int>res;
        for (int i = 0; i < nums.size(); i++)
        {
            mp[nums[i]]++;
        }
        for (auto i : mp)
        {
            if (i.second == 1)
                res.push_back(i.first);
        }
        sort(res.begin(), res.end());
        return res;
    }

};