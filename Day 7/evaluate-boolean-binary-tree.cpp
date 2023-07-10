class Solution {
public:
    bool evaluateTree(TreeNode* root) {

        if (root->val == 2)
            return evaluateTree(root->left) or evaluateTree(root->right);
        else if (root->val == 3)
            return evaluateTree(root->left) and evaluateTree(root->right);
        return root->val;
    }
};