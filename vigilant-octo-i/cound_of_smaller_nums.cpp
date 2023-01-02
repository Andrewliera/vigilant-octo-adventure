/*
in line 25 Grandyang uses the ?(evaluate expression) which ive never really used before is why i sniped this solution
it also utilizes the O(nlogn) solution explained by YT:HappyCoding so taking a look at both is recommended 
fails test 62/65 TLE needs a tweak
*/


class Solution {
public:
    struct Node{
    int value = 0;
    int smaller = 0;
    Node* left_child;
    Node* right_child;
    Node(int val, int sm) : value(val), smaller(sm), left_child(NULL), right_child(NULL){}
    };
    
    
    int insert_node(Node*& root,int value){
        if(!root){
            return (root = new Node(value, 0)), 0;
        }
        if(root->value > value){
            return root->smaller++, insert_node(root->left_child, value);
        }
        return insert_node(root->right_child, value) + root->smaller + (root->value < value ? 1 : 0);
        
    }
    vector<int> countSmaller(vector<int>& nums) {
        
        
        int length = nums.size();
        if(length < 1){
            return nums;
        }
        vector<int> counts(length);
        Node *root = NULL;
        for(int i = length - 1; i >= 0; i--){
            counts[i] = insert_node(root, nums[i]);
        }
        return counts;
    }
};
