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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
         vector<vector<int>>ans;

        if(root==NULL){
            return ans;
        }
        queue<TreeNode*>pendingnodes;
        pendingnodes.push(root);
        int k=1;
        while(pendingnodes.size()!=0){
            int qsize=pendingnodes.size();
         vector<int>v;

            for(int i=0;i<qsize;i++){
         TreeNode* front=pendingnodes.front();
         pendingnodes.pop();
         
         if(front->left!=NULL){
             pendingnodes.push(front->left);
           
         }
        if(front->right!=NULL){
             pendingnodes.push(front->right);
            
        }
         
        v.push_back(front->val);
        

        }
        ans.push_back(v);
        k++;
        }

for(int i=1;i<ans.size();i=i+2){
    reverse(ans[i].begin(),ans[i].end());
}
return ans;
    }
};