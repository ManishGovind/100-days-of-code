class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        std::vector<std::pair<int, int>> strength;

        for (int i = 0; i < mat.size(); i++) {
            int soldiers = std::accumulate(mat[i].begin(), mat[i].end(), 0);
            strength.push_back({ soldiers, i });
        }


        std::sort(strength.begin(), strength.end(), [](const std::pair<int, int>& a, const std::pair<int, int>& b) {
            if (a.first == b.first) {
                return a.second < b.second; // If the number of soldiers is the same, 
            }
            return a.first < b.first; // Sort by the number of soldiers
            });


        vector<int> result;
        for (int i = 0; i < k; i++) {
            result.push_back(strength[i].second);
        }

        return result;

    }
};