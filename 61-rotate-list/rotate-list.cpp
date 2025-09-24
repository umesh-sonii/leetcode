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
    ListNode* rotateRight(ListNode* head, int k) {

        if(head == NULL || head->next == NULL) return head;
        
        ListNode* temp = head;
        int len = 1;
        while(temp->next) {
            len++;
            temp = temp->next;
        }

        k = k%len;
        if(k == 0) return head;

        ListNode* prev = head;
        
        for(int i = 1; i < len-k; i++) {
            prev = prev->next;
        }

        ListNode* newHead = prev->next;

        prev->next = NULL;
        temp->next = head;

        return newHead;
    }
};