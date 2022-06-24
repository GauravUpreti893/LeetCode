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
    ListNode* nodeswap(ListNode* head, ListNode* a, ListNode* b, ListNode* preva, ListNode* prevb, ListNode* nexta, ListNode* nextb)
    {
        if (a == b)
        {
            return head;
        }
        if (preva == NULL)
        {
            if (a->next == b)
            {
                a->next = nextb;
                b->next = a;
                return b; // new head
            }
            else
            {
                a->next = nextb;
                b->next = nexta;
                prevb->next = a;
                return b;
            }
        }
        else 
        {
            if (a->next == b)
            {
                a->next = nextb;
                b->next = a;
                preva->next = b;
            }
            else 
            {
                a->next = nextb;
                b->next = nexta;
                preva->next = b;
                prevb->next = a;
            }
        }
        return head;
    }
    ListNode* swapNodes(ListNode* head, int k) {
        int n = 0;
        ListNode* curr = head;
        while (curr != NULL)
        {
            n++;
            curr = curr->next;
        }
        ListNode* a, *b, *preva = NULL, *prevb = NULL, *nexta = NULL, *nextb = NULL;
        int x = k, y = n - k + 1;
        if (x > y)
            swap(x,y);
        curr = head;
        for (int i = 1; i <= n; i++)
        {
            if (i == (x - 1))
            {
                preva = curr;
            }
            else if (i == x)
            {
                a = curr;
            }
            if (i == (y - 1))
            {
                prevb = curr;
            }
            else if (i == y)
            {
                b = curr;
            }
            curr = curr->next;
        }
        nexta = a->next;
        nextb = b->next;
        head = nodeswap(head, a,b,preva, prevb,nexta, nextb);
        return head;
    }
};