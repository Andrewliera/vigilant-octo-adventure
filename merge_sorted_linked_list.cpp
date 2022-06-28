/**
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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        
        if(list1 == NULL){
            return list2;
        }
        
        if(list2 == NULL){
            return list1;
        }
        
        if(list1->val > list2->val){
            swap(list1,list2);
        }
            
        ListNode* temp_list = list1;
        
        while(list1 && list2 != NULL){
            
            ListNode* temp_placeholder = NULL;
            
            while(list1 != NULL  && list1->val <= list2->val){
            
            temp_placeholder = list1;
            list1 = list1->next;
            
            }
            
            temp_placeholder->next = list2;
            swap(list1,list2);            
        }    
        return temp_list;
    }
};
