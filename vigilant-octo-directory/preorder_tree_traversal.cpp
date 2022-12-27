/*quick notes
n-ary trees are interesting haven't thought of tree traversal since sophomore year very fun
i originally had 
if(root-> value == NULL) instead of if(!root) which was a silly mistake which will only give you a runtime error on submission, but test cases will pass
// Definition for a Node.

#include <vector>

class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};

*/
class Solution {
public:
    vector<int> preorder(Node* root) {
       
        if(!root){
            return {};
        }
        
        vector<int> result;
        stack<Node*> temp_stack;
        
        temp_stack.push(root);
        
        while(!temp_stack.empty()){
            Node* current_node = temp_stack.top();
            temp_stack.pop();
            result.push_back(current_node->val);
        
            for(int i = current_node->children.size() - 1; i >= 0; i--){
                temp_stack.push(current_node->children[i]);        
            }
        }
        return result;
        
    }
};
