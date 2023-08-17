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
    bool IsOne(TreeNode*root){
        if(root==NULL){
            return 0;
        }
        if(root->val==1){
            return 1;
        }
        return (IsOne(root->left) || IsOne(root->right));
        
        

    }
    TreeNode* pruneTree(TreeNode* root) {
        if(root==NULL){
            return NULL;
        }
        bool right1=IsOne(root->right);
        bool left1=IsOne(root->left);
        if(!right1){
            root->right=NULL;
        }
         if(!left1){
            root->left=NULL;
        }
        if(!right1 && !left1 && root->val==0){
            return NULL;
        }
        pruneTree(root->left);
        pruneTree(root->right);
        return root;


        
    }
};