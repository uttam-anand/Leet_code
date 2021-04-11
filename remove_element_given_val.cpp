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
