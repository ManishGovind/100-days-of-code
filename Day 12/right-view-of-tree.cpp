class Solution
{
public:
    //Function to return list containing elements of right view of binary tree.
    vector<int> rightView(Node* root)
    {

        vector<int> res;
        if (root == NULL) {
            return res;
        }
        queue<Node*> q;
        q.push(root);
        while (!q.empty()) {
            int n = q.size();
            for (int i = 0; i <= n; i++) {
                Node* curr = q.front();
                q.pop();
                if (i == n) {    // for left view , change this to i==0
                    res.push_back(curr->data);
                }
                if (curr->left) {
                    q.push(curr->left);
                }
                if (curr->right) {
                    q.push(curr->right);
                }

            }

        }
        return res;
        // Your Code here
    }
};