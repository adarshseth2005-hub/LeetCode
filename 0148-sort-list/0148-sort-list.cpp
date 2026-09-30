
class Solution {
public:
    ListNode* merge(ListNode* l1, ListNode* l2){
        ListNode* dummy = new ListNode(-1);
        ListNode* i = l1;
        ListNode* j = l2;
        ListNode* k = dummy;

        while(i!=NULL && j!=NULL){
            if(i->val < j->val){
                k->next = i;
                i = i->next;
            }
            else{
                k->next = j;
                j = j->next;
            }
            k=k->next;
        }

        if(i!=NULL) k->next = i;
        if(j!=NULL) k->next = j;

        return dummy->next;

    }
    ListNode* sortList(ListNode* head) {
        if(head == NULL || head->next == NULL) return head;
        ListNode* slow = head;
        ListNode* fast = head;

        while(fast->next != NULL && fast->next->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
        }

        ListNode* head2 = slow->next;
        slow->next= NULL;

        head = sortList(head);
        head2 = sortList(head2);

        return merge(head, head2);
        
    }
};