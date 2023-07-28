void dfs(Node* root, int parent, map<int, int>& m) {
    if (root) {
        m[root->data] = parent;
        dfs(root->left, root->data, m);
        dfs(root->right, root->data, m);
    }
}
// your task is to complete this function
int kthAncestor(Node* root, int k, int node)
{
    map<int, int> m;
    dfs(root, -1, m);
    int ans = -1;
    while (k--) {
        ans = m[node];
        node = m[node];
        if (ans < 0) return -1;
    }
    return ans;

}