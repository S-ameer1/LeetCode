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
    bool isEvenOddTree(TreeNode* root) {
        if(root==NULL){
            return 1;
        }
        queue<TreeNode*>q;
        q.push(root);
        bool flag=1;
        while(q.size()!=0){
            int prev;
            if(flag){
                prev=INT_MIN;
            }
            else{
                prev=INT_MAX;
            }
            int tempsize=q.size();
            for(int i=0;i<tempsize;i++){
                TreeNode*front=q.front();
                q.pop();
                if(flag){
                    if(front->val%2==0 || front->val<=prev){
                        return 0;
                    }
                }
                else{
                    if(front->val%2!=0 || front->val>=prev){
                        return 0;
                    }
                }
                prev=front->val;
                if(front->left){
                    q.push(front->left);
                }
                if(front->right){
                    q.push(front->right);
                }
            }
            flag=!flag;
        }
        return 1;
    }
};