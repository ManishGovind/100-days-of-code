/*
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int x)
    {
        data = x;
        left = NULL;
        right = NULL;
    }
};
*/
class Solution
{
public:
    int getCount(Node* root, int k)
    {
        //code here
        if (root == NULL) return 0;
        queue<Node*> q;
        q.push(root);
        int level = 1, count = 0;
        while (!q.empty()) {

            int n = q.size();
            for (int i = 0; i < n; i++) {
                Node* curr = q.front();
                q.pop();
                if (!curr->left and !curr->right) {
                    k = k - level;
                    if (k >= 0) { count++; }

                }

                if (curr->left) {
                    q.push(curr->left);

                }

                if (curr->right) q.push(curr->right);
            }

            level++;

        }
        return count;
    }
};