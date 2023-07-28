class Solution {
public:


    void dfs(vector<TreeNode*>& v, TreeNode* root, TreeNode* p) {
        if (root == NULL) return;
        if (root->val == p->val)
        {
            return;
        }
        v.push_back(root);
        dfs(v, root->left, p);
        dfs(v, root->right, p);
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if (root == NULL) return root;
        if (root == p || root == q) return root;

        TreeNode* left, * right;
        left = lowestCommonAncestor(root->left, p, q);
        right = lowestCommonAncestor(root->right, p, q);

        if (left && right) return root;
        else if (left) return left;
        else if (right) return right;
        return left;
    }
};