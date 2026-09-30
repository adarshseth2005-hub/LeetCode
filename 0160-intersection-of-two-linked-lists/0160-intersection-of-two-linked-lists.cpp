
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

    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int len1 = length(headA);
        int len2 = length(headB);

        ListNode* tempA = headA;
        ListNode* tempB = headB;

        if(len1 > len2){
            for(int i = 0 ; i<(len1-len2) ; i++){
                tempA = tempA->next;
            }
        }
        else{
            for(int i = 0 ; i<(len2-len1) ; i++){
                tempB = tempB->next;
            }
        }

        while(tempA != tempB){
            tempA = tempA->next;
            tempB = tempB->next;
        }

        return tempA;

    }
};