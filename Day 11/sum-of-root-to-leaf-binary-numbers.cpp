
/* Definition for a binary tree node.
* struct TreeNode {
    *int val;
    *TreeNode* left;
    *TreeNode* right;
    *TreeNode() : val(0), left(nullptr), right(nullptr) {}
    *TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    *TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}
    *
};
*/
class Solution {
public:
    int sum = 0;
    void dfs(TreeNode* root, int num) {
        if (root == NULL) return;
        num = (num << 1) | root->val;
        if (root->left == NULL and root->right == NULL) {
            sum += num;
        }

        dfs(root->left, num);
        dfs(root->right, num);


    }
    int sumRootToLeaf(TreeNode* root) {
        dfs(root, 0);
        return sum;
    }
};