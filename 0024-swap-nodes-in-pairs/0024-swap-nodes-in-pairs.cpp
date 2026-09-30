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
    ListNode* swapPairs(ListNode* head) {
        if(head == NULL || head->next == NULL) return head;

        ListNode* prev = NULL;
        ListNode* a = head;
        ListNode* b = NULL;
        ListNode* fwd = NULL;

        while(a!=NULL && a->next != NULL){
            b= a->next;
            fwd = b->next;
            b->next = a;
            if(prev != NULL) prev->next = b;
            else head =b;
            prev= a;

            a= fwd;
        }
        prev->next = fwd;
        
        return head;
    }
};