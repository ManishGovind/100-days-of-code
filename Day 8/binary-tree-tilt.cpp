/*
Given the root of a binary tree, return the sum of every tree node's tilt.
The tilt of a tree node is the absolute difference between the sum of all left subtree node values and
all right subtree node values.If a node does not have a left child,
then the sum of the left subtree node values is treated as 0.
The rule is similar if the node does not have a right child.
*/



class Solution {
public:
    int ftilt = 0;
    int findTilt(TreeNode* root) {
        sumnode(root);
        return ftilt;
    }
    int sumnode(TreeNode* root) {
        if (root == NULL) return 0;
        int left_sum = sumnode(root->left);
        int right_sum = sumnode(root->right);
        ftilt += abs(left_sum - right_sum);
        return left_sum + right_sum + root->val;
    }
};