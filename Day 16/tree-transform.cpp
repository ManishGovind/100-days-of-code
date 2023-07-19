/*
Given a connected undirected tree with N nodes. In one move, you can merge any two adjacent nodes. Calculate the minimum number of moves required to turn the tree into a star tree.

-> Merging adjacent nodes means deleting the edge between them and considering both the nodes as a single one.

-> A Star tree is a tree with a center node, and all other nodes are connected to the center node only.
*/

class Solution {
public:
    int transform(int N, vector<int> p) {
        // code here
        unordered_map<int, int> mp;
        mp[0] = 0;
        for (int i = 1; i < N; i++) {
            mp[p[i]]++;
        }
        int res = 0;
        for (auto x : mp) {
            res += (x.second > 0 ? 1 : 0);
        }

        if (mp[0] < 2) res--;
        return max(0, res - 1);
    }
};