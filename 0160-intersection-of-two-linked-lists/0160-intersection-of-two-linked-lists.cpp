/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    int length(ListNode *head){
        int len =0;
        ListNode * temp = head;
        while(temp != NULL){
            temp = temp->next;
            len++;
        }
        return len;
    }

    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int lenA =length(headA);
        int lenB =length(headB);

        ListNode* temp1 = headA;
        ListNode* temp2 = headB;

        if(lenA> lenB){
            for(int i = 1 ; i<=lenA-lenB ; i++){
                temp1 = temp1->next;
            }
        }
        else{
            for(int i = 1 ; i<=lenB-lenA ; i++){
                temp2 = temp2->next;
            }
        }

        while(temp1 != temp2){
            temp1 = temp1->next;
            temp2 = temp2->next;
        }


        return temp1;

    }
};