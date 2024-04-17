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
    void help(TreeNode*root,string &s,vector<string>&ans){
        if(root==NULL){
            return;
        }
        if(root->left==NULL && root->right==NULL){
            s.push_back(root->val+'a');
            reverse(s.begin(),s.end());
            ans.push_back(s);
            reverse(s.begin(),s.end());
            return ;
        }
        s.push_back(root->val+'a');
       if(root->left){
          help(root->left,s,ans);
          s.pop_back();
       }
        if(root->right){
            help(root->right,s,ans);
            s.pop_back();
        }
    }
    string smallestFromLeaf(TreeNode* root) {
        vector<string>ans;
        string s="";
        help(root,s,ans);
        sort(ans.begin(),ans.end());
        return ans[0];
        
    }
};