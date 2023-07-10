
/*
Given the root of a binary tree, check whether it is a mirror of itself (i.e., symmetric around its center).
*/

class Solution {

    bool isMirror(TreeNode* root1, TreeNode* root2) {
        if (root1 == nullptr and root2 == nullptr) return true;
        if (root1 == nullptr or root2 == nullptr) return false;
        return root1->val == root2->val and isMirror(root1->left, root2->right) and isMirror(root1->right, root2->left);
    }

public:
    bool isSymmetric(TreeNode* root) {

        return isMirror(root, root);
    }
};