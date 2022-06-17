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
    // ListNode* rev(ListNode* curr, ListNode *&newhead)
    // {
    //     if (curr == NULL || curr->next == NULL)
    //     {
    //         newhead = curr;
    //         return curr;
    //     }
    //     ListNode* prev = rev(curr->next, newhead);
    //     prev->next = curr;
    //     return curr;
    // }
    ListNode* reverseList(ListNode* head) {
        ListNode *prev = NULL, *curr = head, *next;
        while (curr != NULL)
        {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
        // ListNode *newhead;
        // ListNode *nw = rev(head, newhead);
        // if (nw != NULL)
        //     nw->next = NULL;
        // return newhead;
    }
};