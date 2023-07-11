class Solution {
public:
    bool checkTree(TreeNode* root) {
        int sum = 0;
        if (root == NULL)return true;
        if (root->left != NULL) sum += root->left->val;
        if (root->right != NULL) sum += root->right->val;
        return root->val == sum;
    }
};