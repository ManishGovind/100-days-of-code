class Solution {
public:
    int height(TreeNode* root) {
        if (root == NULL) return 0;
        int left_height = height(root->left);
        int right_height = height(root->right);

        return max(left_height, right_height) + 1;

    }


    bool isBalanced(TreeNode* root) {
        if (root == NULL) {
            return true;
        }
        int left_height = height(root->left);
        int right_height = height(root->right);
        int res = abs(left_height - right_height);

        if (res > 1) return false;
        return isBalanced(root->left) && isBalanced(root->right);

    }
};