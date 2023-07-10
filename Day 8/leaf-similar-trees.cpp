class Solution {
public:
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> r1, r2;
        dfs(root1, r1);
        dfs(root2, r2);
        return r1 == r2;
    }
    void dfs(TreeNode* node, vector<int>& leaves) {
        if (node == NULL) return;
        if (node->left == NULL && node->right == NULL)
            leaves.push_back(node->val);
        dfs(node->left, leaves);
        dfs(node->right, leaves);
    }


};