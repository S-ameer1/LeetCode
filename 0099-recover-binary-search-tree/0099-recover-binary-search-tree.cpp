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
    TreeNode* first, *last, *prev;
public:
    void inorder(TreeNode* root){
        if(root==NULL) return;
        inorder(root->left);
        if(prev!=NULL && (root->val<prev->val)){
            if(first==NULL){
                first=prev;
                last=root; 
            }
            else
                last=root;
        }
        prev=root;
        inorder(root->right);
    }
    void recoverTree(TreeNode* root) {
        first=last=prev=NULL;
        inorder(root);
        swap(first->val,last->val);
    }
};


/*
void help(TreeNode*root,vector<int>&v){
        if(root==NULL){
            return;
        }
        help(root->left,v);
        v.push_back(root->val);
        help(root->right,v);
    }
    void helpSwap(TreeNode*root,vector<int>v,int i){
        if(root==NULL){
            return;
        }
        helpSwap(root->left,v,i);
        if(root->val!=v[i]){
           root->val=v[i];
        }
            i++;
        helpSwap(root->right,v,i);
    }
    void recoverTree(TreeNode* root) {
        vector<int>v;
        help(root,v);
        sort(v.begin(),v.end());
        helpSwap(root,v,0);
        
    }

    */