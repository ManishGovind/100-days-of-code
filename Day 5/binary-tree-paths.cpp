class Solution {
public:
    vector<string> res;

    void getTreePaths(TreeNode* root, string s) {
        if (root == NULL)
            return;
        else if (root->left == NULL and root->right == NULL) {
            res.push_back(s + to_string(root->val));
        }
        else {
            s = s + to_string(root->val) + "->";
            getTreePaths(root->left, s);
            getTreePaths(root->right, s);
        }

    }
    vector<string> binaryTreePaths(TreeNode* root) {
        getTreePaths(root, "");
        return res;
    }
};