/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:

    void dfs(TreeNode* root, unordered_map<int, int>& m) {
        if (root == nullptr) {
            return;
        }
        dfs(root->left, m);
        dfs(root->right, m);
        m[root->val]++;
    }
    vector<int> findMode(TreeNode* root) {
        unordered_map<int, int> mp;
        dfs(root, mp);
        vector<int> modes;
        int maxFrequency = 0;

        for (const auto& pair : mp) {
            if (pair.second > maxFrequency) {
                modes.clear();
                modes.push_back(pair.first);
                maxFrequency = pair.second;
            }
            else if (pair.second == maxFrequency) {
                modes.push_back(pair.first);
            }
        }

        return modes;



    }
};