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
    TreeNode* addOneRow(TreeNode* root, int val, int depth, bool isleft = true) {
        TreeNode* tmp = root;
        if(depth == 1){
            root = new TreeNode(val);
            if(isleft){
                root->left = tmp;
            }else{
                root->right = tmp;
            }
            return root;
        }
        if(!root){return NULL;}

        root->left = addOneRow(root->left, val, depth-1, true);
        root->right = addOneRow(root->right, val, depth-1, false);

        return root;
    }
};