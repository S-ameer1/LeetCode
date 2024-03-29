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
    int findBottomLeftValue(TreeNode* root) {
        queue<TreeNode*>q;
        int ans=0;
        q.push(root);
        while(q.size()!=0){
            TreeNode*front=q.front();
            ans=front->val;
            q.pop();
            if(front->right!=NULL){
                q.push(front->right);
            }
            if(front->left!=NULL){
                q.push(front->left);
            }
        }
        return ans;
    }
};