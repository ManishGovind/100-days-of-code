class Solution {
public:
    int maxDepth(TreeNode* root) {

        if (!root) {
            return 0;
        }

        int leftdep = maxDepth(root->left);
        int rightdep = maxDepth(root->right);
        return max(leftdep, rightdep) + 1;
    }
};