/*
A binary tree is uni - valued if every node in the tree has the same value.
Given the root of a binary tree, return true if the given tree is uni - valued, or false otherwise.
*/



class Solution {
public:
    bool isUnivalTree(TreeNode* root) {
        if (root == NULL) return true;
        if (root->left != NULL && root->left->val != root->val) return false;
        if (root->right != NULL && root->right->val != root->val) return false;

        return isUnivalTree(root->left) && isUnivalTree(root->right);


    }
};