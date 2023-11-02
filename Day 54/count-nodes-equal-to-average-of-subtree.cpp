/class Solution {
public:
    int cnt = 0;
    pair <int, int> dfs(TreeNode* root) {

        if (root == nullptr) {
            return make_pair(0, 0);
        }

        pair<int, int> left = dfs(root->left);
        pair<int, int> right = dfs(root->right);

        int sum = left.first + right.first + root->val;
        int fre = left.second + right.second + 1;
        int avg = sum / fre;
        if (root->val == avg) {
            cnt++;
        }

        return make_pair(sum, fre);
    }


    int averageOfSubtree(TreeNode* root) {
        dfs(root);
        return cnt;
    }
};