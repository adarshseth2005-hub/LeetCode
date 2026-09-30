
class Solution {
public:
    int length(ListNode* head){
        int len = 0;
        ListNode* temp = head;
        while(temp != NULL){
            temp= temp->next;
            len++;
        }
        return len;
    }
    ListNode* oddEvenList(ListNode* head) {
        int n = length(head);
        ListNode* odd = new ListNode(-1);
        ListNode* even = new ListNode(-1);

        ListNode* temp = head;
        ListNode* t1 = odd;
        ListNode* t2 = even;

        for(int i =1 ; i<=n  ; i++){
            if(i%2 != 0){
                t1->next = temp;
                t1 = temp;
            }
            else{
                t2->next = temp;
                t2 = temp;
            }
            temp = temp->next;
        }

        t1->next = even->next;
        t2->next = NULL;
        return odd->next;
    }
};