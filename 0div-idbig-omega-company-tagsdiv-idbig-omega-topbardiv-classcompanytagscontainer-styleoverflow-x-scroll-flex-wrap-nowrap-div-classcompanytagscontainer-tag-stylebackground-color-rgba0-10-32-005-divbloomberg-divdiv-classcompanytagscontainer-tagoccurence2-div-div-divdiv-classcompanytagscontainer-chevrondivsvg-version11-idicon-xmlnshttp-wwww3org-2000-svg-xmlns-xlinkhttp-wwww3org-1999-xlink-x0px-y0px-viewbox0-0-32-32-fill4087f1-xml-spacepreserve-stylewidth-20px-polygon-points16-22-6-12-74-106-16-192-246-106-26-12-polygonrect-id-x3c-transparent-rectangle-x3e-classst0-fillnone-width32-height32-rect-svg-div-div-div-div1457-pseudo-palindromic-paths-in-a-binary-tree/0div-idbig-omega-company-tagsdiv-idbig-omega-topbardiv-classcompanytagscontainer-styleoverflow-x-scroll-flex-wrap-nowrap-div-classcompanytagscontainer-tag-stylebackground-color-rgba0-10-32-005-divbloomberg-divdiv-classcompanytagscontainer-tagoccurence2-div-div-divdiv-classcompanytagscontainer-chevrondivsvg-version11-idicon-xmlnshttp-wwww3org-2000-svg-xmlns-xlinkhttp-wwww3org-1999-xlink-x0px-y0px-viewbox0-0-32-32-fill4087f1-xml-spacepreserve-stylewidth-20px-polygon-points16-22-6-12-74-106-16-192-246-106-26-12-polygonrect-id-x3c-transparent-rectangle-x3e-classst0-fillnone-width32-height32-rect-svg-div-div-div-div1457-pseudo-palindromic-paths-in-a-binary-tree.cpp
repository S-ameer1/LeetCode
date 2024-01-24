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
    bool isvalid(unordered_map<int,int>m){
        int count=0;
        for(auto i:m){
            if(i.second%2!=0){
                count++;
                if(count>1){
                    return 0;
                }
            }
        }
        return 1;
    }
    int help(TreeNode*root,unordered_map<int,int>&m ){
        if(root==NULL){
            return 0;
        }
        m[root->val]++;
        if(root->left==NULL && root->right==NULL){
            if(isvalid(m)){
                m[root->val]--;
                return 1;
            }
            m[root->val]--;
            return 0;

        }
        int leftc=help(root->left,m);
        int rightc=help(root->right,m);
        m[root->val]--;
        return leftc+rightc;
    }
    int pseudoPalindromicPaths (TreeNode* root) {
        int count=0;
        unordered_map<int,int>m;
        return help(root,m);
        
    }
};