/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        
        if(root == NULL || root == p || root == q){
            return root;
        }
        
        TreeNode* left_child = lowestCommonAncestor(root->left, p, q);
        TreeNode* right_child = lowestCommonAncestor(root->right, p, q);
        
        if(left_child == NULL){
            return right_child;
        }
        else if(right_child == NULL){
            return left_child;
        }
        else{
            return root;
        }   
    }
};
