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
    int ans=0;
    void help(TreeNode* root,int mini,int maxi){
        if(root==NULL){
            return ;
        }
        maxi = max(maxi,root->val);
        mini = min(mini,root->val);
        ans = max(ans,maxi-mini);
        help(root->left,mini,maxi);
        help(root->right,mini,maxi);


    }
    int maxAncestorDiff(TreeNode* root) {
        int min=root->val;
        int maxi=root->val;
        help(root,min,maxi);
        return ans;
    }
};