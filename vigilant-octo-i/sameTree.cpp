#include <stack>
#include <vector>

using namespace std;

class Solution {

    struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };

private:
    vector<int> traverse(TreeNode* root, stack<TreeNode*> curr_stack, )
public:
    bool isSameTree( TreeNode* p, TreeNode* q){

        vector<int> p_path = traverse()
        


    }


};

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
 
class Solution {

  
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {

        if(!p && !q){
            return true;
        }
        if(!p || !q){
            return false;
        }

        if(p->val != q->val){
            return false;            
        }

        return(isSameTree(p->left, q->left) && isSameTree(p->right,q->right));

    }
};
*/