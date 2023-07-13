/* A binary tree Node
struct Node
{
    int data;
    Node* left, * right;
}; */

class Solution {
public:
    vector<int> res;
    void leftboundary(Node* root) {
        if (root == NULL || (!root->left && !root->right)) {
            return;
        }
        res.push_back(root->data);
        if (root->left) leftboundary(root->left);
        else if (root->right)leftboundary(root->right);
    }
    void rightboundary(Node* root) {
        if (root == NULL || (!root->left && !root->right)) {
            return;
        }

        if (root->right) rightboundary(root->right);
        else if (root->left) rightboundary(root->left);
        res.push_back(root->data);
    }

    void leafboundary(Node* root) {
        if (root == NULL) {
            return;
        }
        if (!root->left && !root->right) {
            res.push_back(root->data);
        }

        leafboundary(root->left);
        leafboundary(root->right);

    }
    vector <int> boundary(Node* root)
    {
        if (root == NULL) return res;
        res.push_back(root->data);
        leftboundary(root->left);
        leafboundary(root->left);
        leafboundary(root->right);
        rightboundary(root->right);
        return res;


    }
};