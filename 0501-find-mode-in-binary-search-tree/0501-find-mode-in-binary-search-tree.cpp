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
    unordered_map<int,int>map;

    void help(TreeNode*root,vector<int>&ans){
        if(root==NULL){
            return ;
        }
        ans.push_back(root->val);
        help(root->left,ans);
        help(root->right,ans);
    }
    vector<int> findMode(TreeNode* root) {
        vector<int>ans;
        help(root,ans);
        int max=INT_MIN;
        for(int i=0;i<ans.size();i++){
            map[ans[i]]++;
            if(map[ans[i]]>max){
                max=map[ans[i]];
            }
        }
        vector<int>finalans;
        for(auto i:map){
            if(i.second==max){
                finalans.push_back(i.first);
            }
        }


        return finalans;
    }
};