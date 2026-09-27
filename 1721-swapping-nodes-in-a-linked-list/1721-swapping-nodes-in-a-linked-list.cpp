
class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode * beg = head;

        for(int i = 1 ; i<k ; i++){
            beg = beg->next;
        }

        ListNode * fast = beg;
        ListNode * end = head;
        
        while(fast != NULL && fast->next != NULL){
            fast = fast->next;
            end = end->next;
        }
        
        int temp = beg->val;
        beg->val = end->val;
        end->val = temp;

        return head;
    }
};