class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {

        if (root == NULL) {
            return NULL;

        }
        invertTree(root->right);
        invertTree(root->left);
        TreeNode* temp = root->left;
        root->left = root->right;
        root->right = temp;
        return root;

    }
};