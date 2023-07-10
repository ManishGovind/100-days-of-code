class Solution {
public:
    bool isCousins(TreeNode* root, int x, int y) {

        queue<TreeNode*> q;
        q.push(root);
        bool flag1 = false, flag2 = false;
        while (!q.empty()) {
            int n = q.size();
            for (int i = 0; i < n; i++) {
                TreeNode* curr = q.front();
                q.pop();
                if (curr->left && curr->right) {
                    if ((curr->left->val == x and curr->right->val == y) ||
                        (curr->left->val == y and curr->right->val == x))
                    {
                        return false;                // same parent
                    }
                }
                if (curr->val == x) flag1 = true;
                if (curr->val == y) flag2 = true;
                if (curr->left) q.push(curr->left);
                if (curr->right) q.push(curr->right);

            }
            if (flag1 && flag2) {
                return true;
            }
            flag1 = false, flag2 = false;
        }

        return false;
    }
};