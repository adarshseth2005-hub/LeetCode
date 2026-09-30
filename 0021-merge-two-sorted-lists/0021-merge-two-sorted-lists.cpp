
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* dummy= new ListNode(-1);

        ListNode* i = list1;
        ListNode* j = list2;
        ListNode* k = dummy;

        while(i!=NULL && j != NULL){
            if(i->val < j->val){
                k->next = i;
                i = i->next;
            }
            else{
                k->next = j;
                j= j->next;
            }
            k = k->next;
        }

        if(i!= NULL) k->next = i;
        if(j != NULL) k->next = j;

        return dummy->next;
    }
};