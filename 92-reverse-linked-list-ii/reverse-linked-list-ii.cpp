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

    ListNode* reverse(ListNode* head) {
        if(head == NULL || head->next == NULL) return head;

        ListNode* newHead = reverse(head->next);

        ListNode* front = head->next;
        front->next = head;
        head->next = NULL;

        return newHead;
    }

    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(!head || left == right) return head;  

        ListNode* dummy = new ListNode(-1);       
        dummy->next = head;                       
        ListNode* lTail = dummy;

        for(int i=1; i<left; i++) {                  
            lTail = lTail->next;
        }
        
        ListNode* rTail = lTail;
        for(int i=left; i<=right; i++) {             
            rTail = rTail->next;
        }
        
        ListNode* lHead = lTail->next;                     
        ListNode* rHead = rTail->next;                     
        lTail->next = NULL;
        rTail->next = NULL;

        ListNode* newHead = reverse(lHead);

        lTail->next = newHead;

        while(lTail->next) {                              
            lTail = lTail->next;
        }
        lTail->next = rHead;  

        return dummy->next;
    }
};