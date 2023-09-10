class Solution
{
public:
    void dfs(Node* root, vector<int>& res) {
        if (root == NULL) return;

        dfs(root->left, res);
        res.push_back(root->data);
        dfs(root->right, res);
    }
    int kthLargest(Node* root, int K)
    {
        //Your code here
        vector<int> res;
        dfs(root, res);
        int n = res.size();
        return res[n - K];
    }
};