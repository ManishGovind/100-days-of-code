class Solution {
public:
    /*int result = 0;
     void dfs(TreeNode* root, int low, int high) {
       if(root==NULL)return ;
       dfs(root->left,low, high);
       if(root->val >= low and root->val <= high){
           result += root->val; 
       }
       dfs(root->right, low , high);


     }
    int rangeSumBST(TreeNode* root, int low, int high) {
        dfs(root, low, high);
        return result;
    }*/
    int rangeSumBST(TreeNode* root, int low, int high) {
        if (root == NULL) return result;
        if (root->val < low) root->left = NULL;
        if (root->val > high) root->right = NULL;
        if (root->val >= low and root->val <= high) {
            return  root->val + rangeSumBST(root->left, low, high) + rangeSumBST(root->right, low, high);
        }
        return rangeSumBST(root->left, low, high) + rangeSumBST(root->right, low, high);

    }
};