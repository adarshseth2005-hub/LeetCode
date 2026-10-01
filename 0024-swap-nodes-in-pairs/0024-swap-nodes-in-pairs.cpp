
class Solution {
public:
    int length(ListNode* head){
        int len = 0;
        ListNode* temp = head;
        while(temp != NULL){
            temp = temp->next;
            len++;
        }
        return len;
    }

    ListNode* swapPairs(ListNode* head) {
        int n = length(head);
        ListNode* d1 = new ListNode(-1);
        ListNode* d2 = new ListNode(-1);

        ListNode* t= head;
        ListNode* t1 = d1;
        ListNode* t2 = d2;

        for(int i =1 ; i<=n ; i++){
            if(i%2 != 0){
                t1->next = t;
                t1 = t;
            }
            else{
                t2->next = t;
                t2=t;
            }
            t = t->next;
        }

        t1->next =NULL;
        t2->next = NULL;

        ListNode* odd = d1->next;
        ListNode* even = d2->next;

        ListNode* dummy = new ListNode(-1);
        ListNode* t3 = dummy;

        while(odd!= NULL && even!=NULL){
            t3->next = even;
            even = even->next;
            t3 = t3->next;

            t3->next = odd;
            odd = odd->next;
            t3 = t3->next;

        }
        if(odd != NULL) t3->next = odd;
        return dummy->next;

        

    }

    // method -1
    // ListNode* swapPairs(ListNode* head) {
    //     if(head == NULL || head->next == NULL) return head;

    //     ListNode* prev = NULL;
    //     ListNode* a = head;
    //     ListNode* b = NULL;
    //     ListNode* fwd = NULL;

    //     while(a!= NULL && a->next!= NULL){
    //         b = a->next;
    //         fwd = b->next;
    //         b->next = a;
    //         if(prev != NULL) prev->next = b;
    //         else head = b;
    //         prev= a;
    //         a = fwd;
    //     }
    //     prev->next = fwd;

    //     return head;

    // }
};