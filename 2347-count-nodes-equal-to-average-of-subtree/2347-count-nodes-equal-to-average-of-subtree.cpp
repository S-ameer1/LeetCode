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
    int summ(TreeNode*root,int &n){
        if(root==NULL){
            return 0;
        }
        n++;
        return (root->val+summ(root->left,n)+summ(root->right,n));

    }
    void help(TreeNode*root,int &count){
        if(root==NULL){
            return ;
        }
        int n=0;
        int sum=summ(root,n);
        if(round(sum/n)==root->val){
            count++;
        }
        help(root->left,count);
        help(root->right,count);
    }
    int averageOfSubtree(TreeNode* root) {
        int count=0;
        help(root,count);
        return count;
    }
};