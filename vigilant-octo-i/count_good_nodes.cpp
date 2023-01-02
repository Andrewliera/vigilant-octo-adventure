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
  int result = 0;
  int goodNode(TreeNode* root){
    
    if(!root){
      return result;
    }
    temp = root->val;
    dfs(root, temp);
    return result;
  }

  private:
    void dfs(TreeNode* curr_node, int curr_max){
      
      if(!curr_node){
      return;
      }
      
      if(curr_node->val >= curr_max){
        result++;
        curr_max = curr_node->val;
      }
      dfs(curr_node->left, curr_max);
      dfs(curr_node->right, curr_max);
    }
};
