class Solution {
public:
    TreeNode* prev = NULL;
    int count = 0;
    int max = 0;
    vector<int> findMode(TreeNode* root) {
        vector<int> result;
        inOrder(root, result);
        return result;
    }

    void inOrder(TreeNode* root, vector<int>& result) {
        // Base case
        if (root == NULL) {
            return;
        }
        inOrder(root->left, result);
        if (prev && prev->val == root->val) {
            count += 1;
        }
        else {
            count = 1;
        }
        // Check everytime to make sure when most frequent is at last portion of the list,
        // still able to spot it
        if (count > max) {
            max = count;
            result.clear();
            result.push_back(root->val);
        }
        else if (count == max) {
            result.push_back(root->val);
        }
        prev = root;
        inOrder(root->right, result);
    }
};