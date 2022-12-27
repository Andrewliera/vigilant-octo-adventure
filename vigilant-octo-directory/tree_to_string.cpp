class Solution{

private:
    void convert(TreeNode* root, string& result){
        
        if(!root){
        return;
        }
        
        result += to_string(root->val);
        
        if(root->left != NULL){
            result += '(';
            convert(root->left, result);
            result += ')'; 
        }
        if(root->right != NULL){
            
            if(!root->left){
                result += "()";
            }
            result += '(';
            convert(root->right, result);
            result += ')'; 
            
        }
    }
    
public:
    string tree2str(TreeNode* root){
    
        string result;
        convert(root, result);
        return result;
    }
};



/*funny solution
class Solution{
public:

  string tree2string(TreeNode* root){
    
    return root ? to_string(root->val) + (root->left ? "(" + tree2str(root->left) + ")" : "" ) +
        (root->right ? "(" + tree2str(root->right) + ")" : "" ) 
        : "";
  }
};
*/
