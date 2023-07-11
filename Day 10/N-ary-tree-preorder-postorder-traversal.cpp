//N-ary-Tree-preOrder-traversal
class Solution {
public:
    void pretraversal(Node* root, vector<int>& res) {
        if (!root) return;
        res.push_back(root->val);
        for (Node* child : root->children) {
            pretraversal(child, res);
        }
    }
    vector<int> preorder(Node* root) {
        vector<int> res;
        pretraversal(root, res);
        return res;
    }
};


//N-ary-Tree-postOrder-traversal
class Solution {
public:
    void posttraversal(Node* root, vector<int>& res) {
        if (!root) return;
        for (Node* child : root->children) {
            posttraversal(child, res);
        }

        res.push_back(root->val);
    }
    vector<int> postorder(Node* root) {
        vector<int> res;
        posttraversal(root, res);
        return res;
    }
};