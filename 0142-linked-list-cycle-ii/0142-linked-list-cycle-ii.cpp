/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        unordered_map<ListNode*, int> mp;
        while (head != NULL)
        {
            if (mp[head])
                return head;
            mp[head] = 1;
            head = head->next;
        }
        return NULL;
        // ListNode* slow = head;
        // ListNode* fast = head;
        // if (head == NULL)
        //     return NULL;
        // fast = fast->next;
        // if (fast == NULL)
        //     return NULL;
        // fast = fast->next;
        // while (slow != fast)
        // {
        //     slow = slow->next;
        //     if (fast == NULL)
        //     return NULL;
        //     fast = fast->next;
        //     if (fast == NULL)
        //         return NULL;
        //     fast = fast->next;
        // }
        // return slow;
    }
};