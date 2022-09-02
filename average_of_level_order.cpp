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
    vector<double> averageOfLevels(TreeNode* root) {
        
        if(!root){
            return{};
        }
        
        vector<double> result;
        queue<TreeNode*> tempq;
        tempq.push(root);
        TreeNode* curr;
        
        while(!tempq.empty()){
            
            queue<TreeNode*> levelq;
            long sum = 0;
            long total = 0;
            
            while(!tempq.empty()){
                curr = tempq.front();
                tempq.pop();
                
                sum += curr->val;
                total++;
            
                if(curr->left != NULL){
                    levelq.push(curr->left);
                }
                if(curr->right != NULL){
                    levelq.push(curr->right);
                }
            }
            double av = (double) sum / double(total);
            result.push_back(av);
            tempq = levelq;
            
        }
        return result;
        
    }
};



class Solution2{
public:
  
  vector<double avergaeOfLevels(TreeNode* root){
    
    if(!root){
      return {};
    }
    
    vector<double> result;
    queue<TreeNode*> temp;
    //curr_node
    temp.push(root);
    temp.push(NULL);// bigbrain solution by megamind(discussions) to use NULL to signify the end of a level
    long sum = 0;
    long total = 0;
    double average;
    
    while(!temp.empty()){
      
      TreeNode* curr_node = temp.front();
      temp.pop();
      if(!current_node){
        average = (double) sum / (double) total;
        sum = 0;
        total = 0; 
        result.push_back(average);
        
        temp.push(NULL);
        if(!temp.front()){
          break;
        }
      } 
      else{
        total++;
        sum += current_node->val;
        
        if(current_node->left != NULL){
          temp.push(current_node->left);
        }
        if(current_node->right != NULL){
          temp.push(current_node->right);
        }
      }
    }
    
  return result;
  }
};
