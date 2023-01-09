#include <vector>
#include <stack>

using namespace std;

class Solution{
    struct TreeNode {
        int val;
        TreeNode *left;
        TreeNode *right;
        TreeNode() : val(0), left(nullptr), right(nullptr) {}
        TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
        TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };


vector<int> preorderTraversal(TreeNode* root){

   vector<int> result;
   stack<int> my_stack;
   TreeNode* curr_node;

   while (root != NULL){
    
    curr_node = root;
    result.push_back(root->val);

    

   }
   
}
};



/*
private:
    void dfs(TreeNode* root, vector<int>& result){

        if(!root){
            return; 
        }

        result.push_back(root->val);
        dfs(root->left, result);
        dfs(root->right, result);

    }

    vector<int> preorderTraversal(TreeNode* root){
        vector<int> result;
        dfs(root, result);
        return result;
    }



*/