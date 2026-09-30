/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:

    // method 1
    ListNode* deleteDuplicates(ListNode* head){
        if(head == NULL || head->next == NULL) return head;
        ListNode* i = head;
        ListNode* j = head;

        while(i!= NULL && j!= NULL){
            if(i->val != j->val){
                i->next = j;
                i = j;
            }
            else{
                j = j->next;
            }
        }
        i->next = NULL;

        return head;
    }

    // method 2
    // ListNode* deleteDuplicates(ListNode* head) {
    //     ListNode * temp = head;
    //     while(temp != NULL && temp->next != NULL){
    //         if(temp->val != temp->next->val){
    //             temp = temp->next;
    //         }
    //         else temp->next = temp->next->next;
    //     }

    //     return head;
    // }
};