Bobble BackgroundBobble Head
Problems
Courses
Geek - O - Lympics
Events
POTD

Refresh


class Solution
{
public:
    bool isFrequencyUnique(int n, int arr[])
    {
        unordered_map<int, int > mp;

        for (int i = 0; i < n; i++) {


            mp[arr[i]]++;

        }

        unordered_set<int>s;
        for (auto i = mp.begin(); i != mp.end(); i++) {

            s.insert(i->second);

        }
        return s.size() == mp.size() ? true : false;

    }
};