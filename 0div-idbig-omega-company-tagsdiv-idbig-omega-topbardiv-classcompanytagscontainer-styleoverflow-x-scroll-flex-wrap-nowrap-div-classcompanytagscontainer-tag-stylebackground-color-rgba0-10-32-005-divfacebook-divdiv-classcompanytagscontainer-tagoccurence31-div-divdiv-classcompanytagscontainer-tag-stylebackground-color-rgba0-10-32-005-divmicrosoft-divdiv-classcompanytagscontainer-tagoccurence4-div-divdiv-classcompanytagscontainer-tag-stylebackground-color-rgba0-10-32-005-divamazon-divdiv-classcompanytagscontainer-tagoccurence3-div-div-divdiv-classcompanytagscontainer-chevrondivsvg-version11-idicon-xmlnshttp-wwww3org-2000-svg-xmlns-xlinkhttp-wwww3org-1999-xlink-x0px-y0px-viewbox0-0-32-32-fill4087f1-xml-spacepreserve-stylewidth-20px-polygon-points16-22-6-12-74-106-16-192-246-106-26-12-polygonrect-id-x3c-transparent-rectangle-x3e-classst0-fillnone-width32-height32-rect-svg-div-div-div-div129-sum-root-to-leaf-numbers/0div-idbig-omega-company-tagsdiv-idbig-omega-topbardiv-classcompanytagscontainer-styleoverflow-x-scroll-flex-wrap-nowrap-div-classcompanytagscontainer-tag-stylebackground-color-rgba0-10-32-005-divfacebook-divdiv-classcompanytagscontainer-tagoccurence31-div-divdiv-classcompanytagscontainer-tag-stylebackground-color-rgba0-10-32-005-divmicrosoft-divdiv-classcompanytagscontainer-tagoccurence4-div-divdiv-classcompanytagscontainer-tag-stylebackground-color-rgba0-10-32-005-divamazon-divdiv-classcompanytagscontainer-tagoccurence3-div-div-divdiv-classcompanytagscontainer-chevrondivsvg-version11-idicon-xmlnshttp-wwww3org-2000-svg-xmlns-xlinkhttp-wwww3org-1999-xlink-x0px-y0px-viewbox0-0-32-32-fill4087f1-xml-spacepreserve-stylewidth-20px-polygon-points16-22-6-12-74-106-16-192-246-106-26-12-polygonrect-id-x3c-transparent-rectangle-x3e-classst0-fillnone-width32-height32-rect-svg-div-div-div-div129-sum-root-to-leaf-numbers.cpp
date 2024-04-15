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

    void help(TreeNode* root, int &ans, int current_num) {
    if (root == NULL) {
        return;
    }
    current_num = current_num * 10 + root->val; 
    if (root->left == NULL && root->right == NULL) { 
        ans += current_num; 
        return;
    }
    help(root->left, ans, current_num); 
    help(root->right, ans, current_num); 
}

    int sumNumbers(TreeNode* root) {
        int ans=0;
        help(root,ans,0);
        return ans;
    }
};