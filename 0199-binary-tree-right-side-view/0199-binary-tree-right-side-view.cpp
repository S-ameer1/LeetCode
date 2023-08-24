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
    vector<int>ans;
    vector<int> rightSideView(TreeNode* root) {
        if(root==NULL){
            return ans;
        }


        queue<TreeNode*>q;
        q.push(root);
        q.push(NULL);
        TreeNode*prev=NULL;
        TreeNode*current=NULL;

        while(!q.empty()){
            current=q.front();
            q.pop();
            if(current==NULL){
                ans.push_back(prev->val);
                if(!q.empty()){
                    q.push(NULL);
                }
             }
             else{
                 if(current->left!=NULL){
                     q.push(current->left);
                 }
                  if(current->right!=NULL){
                     q.push(current->right);
                 }

             }
             prev=current;


        }
        return ans;
    }
};