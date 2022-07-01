//adapted from liuyubobobo
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
       
        if(head == NULL || head->next == NULL){
            return head;
        }
        
        ListNode* current_node = head;
        vector<ListNode*> temp_vector;
        
        while(current_node != NULL){
            temp_vector.push_back(current_node);
            current_node = current_node->next;
        }
        int length = temp_vector.size();
        return temp_vector[length / 2];
    }
};
