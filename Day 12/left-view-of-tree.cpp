void traverse(Node* root, int level, vector<int>& res)
{

    if (root == NULL) {
        return;
    }
    if (level == res.size())
        res.push_back(root->data);
    traverse(root->left, level + 1, res);  // for right view, change the order of left and right
    traverse(root->right, level + 1, res);

}

vector<int> leftView(Node* root)
{
    vector<int> res;
    traverse(root, 0, res);
    return res;
}

// Compare this snippet from left-view-of-tree.cpp: