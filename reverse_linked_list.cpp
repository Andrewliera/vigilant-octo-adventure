class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        
        ListNode *temp_placeholder = NULL;
        ListNode *prev_node = NULL;
        ListNode *current_node = (head);
        
        while(current_node != NULL){
            temp_placeholder = current_node->next;
            current_node->next = prev_node;
            prev_node = current_node;
            current_node = temp_placeholder;
        }
        (head) = prev_node;
        return head;
    }
};
