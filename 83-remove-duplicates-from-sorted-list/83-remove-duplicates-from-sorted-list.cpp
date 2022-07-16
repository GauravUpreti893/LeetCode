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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* prev = NULL, *curr = head;
        while (curr != NULL && curr->next != NULL)
        {
            if (curr->val != curr->next->val)
                break;
            curr = curr->next;
        }
        if (curr == NULL)
            return curr;
        ListNode* newhead = curr;
        prev = curr;
        curr = curr->next;
        while (curr != NULL && curr->next != NULL)
        {
            if (curr->val != curr->next->val)
            {
                prev->next = curr;
                prev = curr;
            }
            curr = curr->next;
        }
        prev->next = curr;
        return newhead;
        
    }
};