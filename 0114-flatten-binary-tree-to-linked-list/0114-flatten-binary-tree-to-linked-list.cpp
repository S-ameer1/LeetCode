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
    TreeNode*help(TreeNode*root){
        if(root==NULL){
            return NULL;
        }
        TreeNode*leftLL=help(root->left);
        TreeNode*rightLL=help(root->right);
        root->left=NULL;
        root->right=leftLL;
        TreeNode*temp=leftLL;
       if (temp != NULL) {
            while (temp->right != NULL) {
                temp = temp->right;
            }
            temp->right = rightLL;
        } else {
            root->right = rightLL;
        }
        
        return root;

    }
    void flatten(TreeNode* root) {
        root=help(root);

    }
};

