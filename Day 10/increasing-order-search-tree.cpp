/*
Given the root of a binary search tree, rearrange the tree in in-order so that the leftmost node in the tree is now the root of the tree,
and every node has no left child and only one right child.


*/




class Solution {
public:
     vector<int> res ;
     void dfs(TreeNode* root){
         if(root == NULL) return ;
         dfs(root->left);
         res.push_back(root->val);
         dfs(root->right);
     }
     TreeNode* increasingBST(TreeNode* root) {
         dfs(root);
         int n = res.size();
         TreeNode* head = new TreeNode(res[0]);
         TreeNode* temp = head;
         for (int x = 1; x < n; x++) {
             temp->right = new TreeNode(res[x]);
             temp = temp->right;
         }
     }
         return head;

    //another approach
 
    void inOrder(TreeNode*& x, TreeNode* y)
    {
        if (y == NULL)
            return;
        inOrder(x, y->left);
        x->right = new TreeNode(y->val);
        x = x->right;
        inOrder(x, y->right);
    }
    TreeNode* increasingBST(TreeNode* root) {
        TreeNode* head = new TreeNode(-1);
        TreeNode* temp = head;
        inOrder(head, root);
        return temp->right;

    }
};