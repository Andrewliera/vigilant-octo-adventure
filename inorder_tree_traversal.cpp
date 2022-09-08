/*recursive approach
Av. runtime, good space usage

Runetime: 5ms   Memory 8.4 MB
*/
recursive approach
class Solution{
private:
    void inorder(TreeNode* root, vector<int>& temp){
    
      if(!root){
      return;
      }
      
      inorder(root->left, temp);
      temp.push_back(root->val);
      inorder(root->right, temp);
  }
    
public:
    vector<int> inorderTraversal(TreeNode* root){
        vector<int> temp;
        inorder(root, temp);
        return temp;
    }
};

/* this iterative Approach uses a Morris Inorder Traversal

Runetime: 8ms    Memory: 8mb
class Solution{
public:
    vector<int> inorder_trav(TreeNode* root){
    
        vector<int> res;
        TreeNode* curr;
        
        while(root != NULL){
           
            if(root->left != NULL){
            curr = root->left;
            
                while(curr->right != NULL){
                    curr = curr->right; 
                }
                
                curr->right = root;
                curr = root->left;
                root->left = NULL;
                root = curr;
                
            }   else{
            
                res.push_back(root->val);
                root = root->right;
            } 
            
        }
        return res;
        
    }
};
*/
