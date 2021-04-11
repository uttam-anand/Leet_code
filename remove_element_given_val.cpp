class Solution {
public:
    ListNode* removeElements(ListNode* head, int& val) {
        if(head == NULL)
            return NULL;
        if(head->val != val)
            head->next = removeElements(head->next, val);
        else
            return removeElements(head->next, val);
        return head;
    }
};

/*
ListNode* removeElements(ListNode* head, int val) {
        ListNode *dummy = new ListNode();
        dummy->next = head;
        ListNode *prev = dummy, *curr = head; 
        while(curr != NULL){
            if(curr->val == val){
                prev->next = curr->next;
            }else{
                prev = prev->next;
            }
            curr = curr->next;
        }
        
        return dummy->next;
*/
