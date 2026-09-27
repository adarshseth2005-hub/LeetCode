
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode * dummy = new ListNode(-1);

        ListNode * t1 = head;
        ListNode * t2 = dummy;

        while(t1 != NULL){
            ListNode* x = t1->next;
            if(x != NULL && t1->val == x->val){ // we will not select this node
                while(x != NULL && x->val == t1->val) x = x->next;
                t1 = x;
            }
            else{ // select the node
                t2->next = t1;
                t2 = t1;
                t1 = t1->next;
            }
        }
        t2->next = NULL;
        return dummy->next;
    }
};