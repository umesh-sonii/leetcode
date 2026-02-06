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
        while(fast->next && fast->next->next) {
            slow = slow->next;
            fast = fast->next->next;
        }

        ListNode* h1 = head;
        ListNode* h2 = reverse(slow);

        while(h2->next) {
            if(h1->val != h2->val) return false;

            h1 = h1->next;
            h2 = h2->next;
        }
        return true;
    }

    ListNode* reverse(ListNode* head) {
        ListNode* temp = head;
        ListNode* prev = NULL;
        while(temp) {
            ListNode* front = temp->next;

            temp->next = prev;

            prev = temp;
            temp = front;
        }
        return prev;
    }
};