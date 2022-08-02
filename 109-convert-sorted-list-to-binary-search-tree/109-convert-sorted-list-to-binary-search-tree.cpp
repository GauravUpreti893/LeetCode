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
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* tobst(ListNode* head, ListNode* tail)
    {
        if (head == tail)
            return NULL;
        if (head->next == tail)
        {
            TreeNode* t = new TreeNode(head->val);
            return t;
        }
        ListNode* slow = head, *fast = head;
        while (fast != tail)
        {
            fast = fast->next;
            if (fast == tail)
                break;
            fast = fast->next;
            slow = slow->next;
        }
        TreeNode* t = new TreeNode(slow->val);
        t->left = tobst(head, slow);
        t->right = tobst(slow->next, tail);
        return t;
    }
    TreeNode* sortedListToBST(ListNode* head) {
        return tobst(head, NULL);  
    }
};