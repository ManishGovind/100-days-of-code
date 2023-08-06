/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:

    vector<TreeNode*> generate(int left, int right) {
        vector<TreeNode*> res;

        if (left == right) {
            TreeNode* node = new TreeNode(left);
            return { node };
        }
        if (left > right) {
            return { NULL };
        }

        for (int i = left; i <= right; i++) {
            vector<TreeNode*> lefttree = generate(left, i - 1);
            vector<TreeNode*> righttree = generate(i + 1, right);
            for (int j = 0; j < lefttree.size(); j++) {
                for (int k = 0; k < righttree.size(); k++) {
                    TreeNode* temp = new TreeNode(i);
                    temp->left = lefttree[j];
                    temp->right = righttree[k];
                    res.push_back(temp);
                }
            }
        }
        return res;
    }

    vector<TreeNode*> generateTrees(int n) {
        return generate(1, n);
    }
};