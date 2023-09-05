
/*Given a Binary Tree of size N, Print the corner nodes ie- the node at the leftmost and rightmost of each level.*/


/*Approch :  level order traversal print  if first and  last element */

void printCorner(Node* root)
{

    // Your code goes here
    if (root == NULL) return;

    queue<Node*> q;
    q.push(root);
    while (!q.empty()) {
        int n = q.size();
        for (int i = 0; i < n; i++) {
            Node* curr = q.front();
            q.pop();
            if (i == 0 || (i != 0 and i == n - 1))  cout << curr->data << " ";
            if (curr->left) q.push(curr->left);
            if (curr->right) q.push(curr->right);
        }

    }



}