class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        
        if(!root){
            return {};
        }
        
        vector<vector<int>> temp_vec;
        queue<TreeNode*> temp_q;
        temp_q.push(root);
        TreeNode* current_node;
       
        while(!temp_q.empty()){
                
            int length = temp_q.size(); // having int length outside of this while loop will return results as -> [[3][9][20][15][17]] raher than the expected[[3],[9,20],[15,17]]
            vector<int> current_level;
            
            for(int i = 0; i < length; i ++){
                current_node = temp_q.front();
                temp_q.pop();
                current_level.push_back(current_node->val);
                if(current_node->left != NULL){
                    temp_q.push(current_node->left);
                }
                if(current_node->right != NULL){
                    temp_q.push(current_node->right);
                }
            }
            temp_vec.push_back(current_level);
        }
        return temp_vec;
    }
};
