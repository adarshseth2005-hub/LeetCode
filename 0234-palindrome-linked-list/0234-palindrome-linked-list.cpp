
class Solution {
public:
    ListNode* reverse(ListNode* head){
        if(head == NULL || head->next == NULL) return head;

        ListNode* prev = NULL;
        ListNode* curr = head;
        ListNode* fwd = NULL;

        while(curr!= NULL){
            fwd = curr->next;
            curr->next = prev;
            prev = curr;
            curr = fwd;
        }

        return prev;
    }
    bool isPalindrome(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;

        // dividing it in two heads
        while(fast->next != NULL && fast->next->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode* head2 = slow->next;
        slow->next = NULL;

        // reversing one part
        head2 = reverse(head2);

        while(head!= NULL && head2 != NULL){
            if(head->val == head2->val){
                head = head->next;
                head2 = head2->next;
            }
            else{
                return false;
            }
        }
        
        return true;
        

    }
};