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
    bool isPalindrome(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;

        while(fast != NULL && fast->next != NULL) {
            fast = fast->next->next;
            slow = slow->next;
        }

        ListNode* h1 = head;
        ListNode* h2 = reverse(slow);

        while(h2 != NULL) {
            if(h1->val != h2->val) return false;

            h1 = h1->next;
            h2 = h2->next;
        }
        return true;
    }

    ListNode* reverse(ListNode* &head) {
        if(head == NULL || head->next == NULL) return head;

        ListNode* newHead = reverse(head->next);
        
        ListNode* front = head->next;
        front->next = head;
        head->next = NULL;

        return newHead;
    }
};