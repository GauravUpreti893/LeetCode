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
    ListNode* partition(ListNode* head, int x) {
        //Breaking list into two part, first with smaller elements and second with rest of them
        ListNode *a = NULL, *b = NULL, *heada = NULL, *headb = NULL, *curr = head;
        while (curr != NULL)
        {
            if (curr->val < x)
            {
                if (a == NULL)
                {
                    a = curr;
                    heada = curr;
                }
                else
                {
                    a->next = curr;
                    a = a->next;
                }
            }
            else
            {
                if (b == NULL)
                {
                    b = curr;
                    headb = curr;
                }
                else
                {
                    b->next = curr;
                    b = b->next;
                }
            }
            curr = curr->next;
        }
        if (b != NULL)
            b->next = NULL;
        if (heada == NULL)
        {
            return headb;
        }
        else
        {
            a->next = headb;
            return heada;
        }
    }
};