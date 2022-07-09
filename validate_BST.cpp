class Solution {
public:
    
    vector<int> tree_order;
    
    void inorderCheck(TreeNode* root){
        if(root != NULL){
            inorderCheck(root->left);
            tree_order.push_back(root->val);
            inorderCheck(root->right);
        }
    }
    bool isValidBST(TreeNode* root) {
        
        inorderCheck(root);
        int length = tree_order.size();
        
        for(int i = 1; i < length;i++){
            if(tree_order[i-1] >= tree_order[i]){
                return false;
            }
        }
        return true;
    }
};
