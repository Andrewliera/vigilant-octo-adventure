class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        
        if(head == NULL || head->next == NULL){
            return NULL;
        }
        
        ListNode *slow_node = head;
        ListNode *fast_node = head;
        
        while(fast_node && fast_node->next ){
         
            slow_node = slow_node->next;
            fast_node = fast_node->next->next;
            
            if(slow_node == fast_node){
                break;
            }
        }
        if(!(fast_node && fast_node->next)) {
            return NULL;
        }
        
        while(head != slow_node){
                    head = head->next;
                    slow_node = slow_node->next;
                }
        return head;
      

    }
};
