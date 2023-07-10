class Solution {
public:
    int firstmin;
    long long  secondmin = LONG_MAX;
    void traverse(TreeNode* root) {
        if (root != NULL) {
            if (firstmin < root->val and root->val < secondmin) {
                secondmin = root->val;
            }
            else if (firstmin == root->val) {
                traverse(root->left);
                traverse(root->right);
            }
        }
    }

    int findSecondMinimumValue(TreeNode* root) {

        firstmin = root->val;
        traverse(root);
        return  secondmin < LONG_MAX ? int(secondmin) : -1;
    }
};