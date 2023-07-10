class Solution {
public:
    int maxDepth(Node* root) {
        if (root == NULL) {
            return 0;
        }
        int level = 0;
        for (int i = 0; i < root->children.size(); i++) {
            level = max(level, maxDepth(root->children[i]));
        }
        return 1 + level;
    }
};


//another approach

class Solution {
public:
    int maxDepth(Node* root) {
        if (root == NULL) {
            return 0;
        }
        int level = 0;
        queue<Node*> q;
        q.push(root);
        int level = 0;

        while (!q.empty()) {

            int size = q.size();
            level++;

            for (int i = 0; i < size; i++) {
                Node* curr = q.front();
                q.pop();
                for (Node*& child : curr->children) {
                    q.push(child);
                }


            }

        }
        return level;

    }
}