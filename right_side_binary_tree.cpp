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
    vector<int> rightSideView(TreeNode* root) {
        
        if (!root) {
            return {};
        }
        
        vector<int> right_side;
        queue<TreeNode*> temp_queue;
        
        temp_queue.push(root);
        
        while(!temp_queue.empty()){
            
            int depth = temp_queue.size();
            
            for(int i = 0; i < depth; i++){
                
                TreeNode* temp_node = temp_queue.front();
                temp_queue.pop();
                
                if(i == depth-1){
                    right_side.push_back(temp_node->val);
                }
                
                if(temp_node->left){
                    temp_queue.push(temp_node->left);
                }
                
                if(temp_node->right){
                    temp_queue.push(temp_node->right);
                
                }   
            }
        }
        
        return right_side;
    }
};
