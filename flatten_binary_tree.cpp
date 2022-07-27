/*
starting to enjoy takeuforward.orgs explenations on some of these leet code problems 
rather than trying to create a new linked list and interating throught the tree, we should rearrang the tree building it backwards 

  
          1
        /   \
       2     5
     /   \   
    3     4 

 
 1. if root == NULL return
 2.flatten-(1) aka traverse right, if right = NULL, traverse left
 3.flatten(5)
 4.flatten (5-> right = NULL, & 5 -> left = NULL) => set 5->right to prev_node(the end point of our list) & left to NULL
 5.set prev_node = root 
 
 6.returns from flatten 1->right (flatten(1->left) has not executed yet)
 7.flatten(2) 
 8.flatten(4) 
 9.flatten(4 -> right = NULL & 4-> left = NULL)
 10.set( 4-> right = prev_node(currently TreeNode(5)))
 

to 
          1
        /   \
      NULL    2
            /   \
         NULL     3
                /   \ 
              NULL    4
                    /   \
                  NULL    5
                            \ 
                            NULL
                            
                            
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
    
    TreeNode* prev_node = NULL; 
    
    void flatten(TreeNode* root) {
        
        if(!root){
            return; 
        }
        
        flatten(root->right);
        flatten(root->left);
        
        root->right = prev_node;
        root->left = NULL;
        
        prev_node = root;
    }
};
