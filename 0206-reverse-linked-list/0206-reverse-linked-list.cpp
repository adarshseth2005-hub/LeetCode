
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head ==  NULL || head->next == NULL) return head;
        ListNode* curr = head;
        ListNode* prev = NULL;
        ListNode* fwd = NULL;

        while(curr!= NULL){
            fwd = curr->next;
            curr->next = prev;
            prev = curr;
            curr = fwd;
        }
        return prev;
    }
};