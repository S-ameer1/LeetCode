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

 TreeNode* targetNode = NULL;
  
  void nodes_to_parent(TreeNode* root, unordered_map<TreeNode*, TreeNode*>&mp)
  {
      queue<TreeNode*>q;
      q.push(root);  
      
      while(!q.empty())
      {
          TreeNode* curr = q.front();
          q.pop();
          if(curr->left)
          {
              mp[curr->left] = curr;   
              q.push(curr->left);
          }
          
          if(curr->right)
          {
              mp[curr->right] = curr;  
              q.push(curr->right);
          }
      }
      
  }
  
  void getTargetNode(TreeNode* root, int target)
  {
      if(root == NULL)return ;
      if(target == root->val)
      {
          targetNode = root;
          return;
      }
      
      getTargetNode(root->left, target);
      getTargetNode(root->right, target);
  }
  
    int amountOfTime(TreeNode* root, int target) {
        unordered_map<TreeNode*, TreeNode*>parent;    
        nodes_to_parent(root, parent);
        getTargetNode(root, target);
    
        queue<TreeNode*>q;
        q.push(targetNode);
        unordered_map<TreeNode*, bool>visited;
        visited[targetNode] = 1;
        
        int ans = -1;
        
        while(!q.empty())
        {
            int sz = q.size();
            ans++;   
            while(sz--)
            {
                TreeNode* curr = q.front();
                q.pop();
                
                if(curr->left && !visited[curr->left])
                {
                    visited[curr->left] = 1;
                    q.push(curr->left);
                }
                if(curr->right && !visited[curr->right])
                {
                    visited[curr->right] = 1;
                    q.push(curr->right);
                }
                
                if(parent[curr] && !visited[parent[curr]])
                {
                    visited[parent[curr]] = 1;
                    q.push(parent[curr]);
                }
            }
            
        }
        
        return ans;
        
    }
};