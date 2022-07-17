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
        ListNode *newhead, *curr = head;
        while(curr != NULL && curr->next != NULL)       
        {
            if (curr->val != curr->next->val)
            {
                newhead = curr;
                break;
            }
            else
            {
                while (curr != NULL && curr->next != NULL)
                {
                    if (curr->val != curr->next->val)
                    {
                        break;
                    }
                    curr = curr->next;
                }
                newhead = curr->next;
                curr = curr->next;
            }
        }
        ListNode *prev = curr;
        if (curr == NULL)
            return NULL;
        curr = curr->next;
        while (curr != NULL && curr->next != NULL)
        {
            if (curr->val == curr->next->val)
            {
                while (curr != NULL && curr->next != NULL)
                {
                    if (curr->val != curr->next->val)
                    {
                        break;
                    }
                    curr = curr->next;
                }
                prev->next = curr->next;
            }
            else
            {
                prev = curr;
            }
            curr = curr->next;
        }
        return newhead;
    }
};