class Solution{
public:
  
  ListNode* reverseList(ListNode* head){
    
    ListNode *temp = NULL;
    ListNode *prev = NULL;
    ListNode *curr = (head);
    
    while(curr != NULL){
      temp = curr->next;
      curr->next = prev;
      prev = curr;
      curr = temp;
    }
    (head) = prev;
    return head;
  }
  
  bool isPalindrome(*ListNode head){
    
    if(head == NULL || head->next == NULL){
      return true;
    }
    int mid = 0;
    ListNode* temp = head;
    while( temp != NULL ){
      mid++;
      temp = temp-> next;
    }
    
    while(mid--){
      temp = temp->next;
    }
    
    ListNode* head2 = reverseList(head);
    while(head != NULL && head2 != NULL){
      if(head->val != head2->val){
        return false;
      }
      head = head->next;
      head2 = head2->next;
    }
    return true;
  }
};
