/*
Given the root of a binary tree, return the length of the diameter of the tree.

The diameter of a binary tree is the length of the longest path between any two nodes in a tree. This path may or may not pass through the root.

The length of a path between two nodes is represented by the number of edges between them.

*/

class Solution {
public:
    int diameter = 0;
    int dfs(TreeNode* root) {
        if (root == NULL) return -1;

        int left_height = dfs(root->left);
        int right_height = dfs(root->right);

        diameter = max(diameter, left_height + right_height + 2);
        return 1 + max(left_height, right_height);

    }
    int diameterOfBinaryTree(TreeNode* root) {

        dfs(root);
        return diameter;
    }



};