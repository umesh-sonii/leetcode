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
    ListNode* sortList(ListNode* head) {
        if(head == NULL || head->next == NULL) return head;

        ListNode* middle = findMiddle(head);
        
        ListNode* rHead = sortList(middle->next);

        middle->next = NULL;

        ListNode* lHead = sortList(head);

        return mergeLL(lHead, rHead);
    }

    ListNode* findMiddle(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head->next;

        while(fast != NULL && fast->next != NULL) {
            fast = fast->next->next;
            slow = slow->next;
        }
        return slow;
    }

    ListNode* mergeLL(ListNode* lHead, ListNode* rHead) {
        ListNode* dummyNode = new ListNode(-1);
        ListNode* temp = dummyNode;

        while(lHead != NULL && rHead != NULL) {
            if(lHead->val < rHead->val) {
                temp->next = lHead;
                temp = temp->next;
                lHead = lHead->next;
            } 
            else {
                temp->next = rHead;
                temp = temp->next;
                rHead = rHead->next;
            }
        }
        if(lHead) temp->next = lHead;
        else temp->next = rHead;

        return dummyNode->next;
    }
};