class Solution {
public:

    void dfs(TreeNode* root, string& res) {
        if (root == NULL)
            return;
        res += to_string(root->val);
        if (root->left == NULL && root->right == NULL)
            return;
        res += '(';
        dfs(root->left, res);
        res += ')';
        if (root->right != NULL) {
            res += '(';
            dfs(root->right, res);
            res += ')';
        }
    }
    string tree2str(TreeNode* root) {
        // string ans = to_string(root->val);
        // if (root->left) 
        // 	ans += "(" + tree2str(root->left) + ")";
        // if (root->right) { 
        // 	if (!root->left) ans += "()"; 
        // 	ans += "(" + tree2str(root->right) + ")"; 
        // }
        // return ans;
        string res = "";
        dfs(root, res);
        return res;
    }
};