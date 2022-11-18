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
    bool hasCycle(ListNode *head) {
        ListNode* slow = head;
        ListNode* fast = head;
        if (head == NULL)
            return false;
        fast = fast->next;
        if (fast == NULL)
            return false;
        fast = fast->next;
        while (slow != fast)
        {
            slow = slow->next;
            if (fast == NULL)
            return false;
            fast = fast->next;
            if (fast == NULL)
                return false;
            fast = fast->next;
        }
        return true;
    }
};