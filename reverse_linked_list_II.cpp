/** i liked this nick white solution, with decrementing left & right(m & n) through the traversal
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        
        if(!head || !head->next){
            return head;
        }
        
        ListNode* prev_node = NULL;
        ListNode* current_node = head;
        
        while(left > 1){
            prev_node = current_node;
            current_node = current_node->next;
            left--;
            right--;
            
            
        }
        
        ListNode* pointer = prev_node;
        ListNode* end = current_node;
        while(right > 0){
            ListNode* next_node = current_node->next;
            current_node->next = prev_node;
            prev_node = current_node;
            current_node = next_node;
            right--;
        }
        
        if(pointer != NULL){
            pointer->next = prev_node;
            
        }else{
            head = prev_node;
        }
        end->next = current_node;
        return head;
    }
};
