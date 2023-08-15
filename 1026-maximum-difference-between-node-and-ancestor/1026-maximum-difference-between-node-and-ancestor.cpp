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
 class Solution{
     public:
 pair<int,int> help(TreeNode* root, int &ans){
        pair<int,int> leftans;
        pair<int,int> rightans;
        int data=root->val;
        int mini=root->val;
        int maxi=root->val;

        if(root->left!=NULL){
            leftans=help(root->left,ans);
            int minileft=leftans.first;
            int maxileft=leftans.second;
            ans=max(ans,max(abs(minileft-data),abs(maxileft-data)));
            mini=min(minileft, data);
            maxi=max(maxileft, data);
        }

        if(root->right!=NULL){
            rightans=help(root->right,ans);
            int miniright=rightans.first;
            int maxiright=rightans.second;
            ans=max(ans,max(abs(maxiright-data),abs(miniright-data)));
            mini=min(mini,min(miniright, data));
            maxi=max(maxi,max(maxiright, data));
        }

        return {mini,maxi};
    }
    int maxAncestorDiff(TreeNode* root) {
        int ans=0;
        help(root,ans);
        return ans;
    }
};
