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
    int distributeCoins(TreeNode* root) {
        int res = 0;
        helper(root, &res);
        return res;
    }

    int helper(TreeNode* root, int* res) {
        if (!root) return 0;
        int l = helper(root->left, res), r = helper(root->right, res);
        *res += abs(l) + abs(r);
        return -(root->val - l - r - 1);
    }
};