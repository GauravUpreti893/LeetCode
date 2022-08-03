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
    ListNode* list;
    int count(ListNode* head)
    {
        int count = 0;
        while (head != NULL)
        {
            count++;
            head = head->next;
        }
        return count;
    }
    TreeNode* bst(ListNode* head, int n)
    {
        if (head == NULL || n == 0)
            return NULL;
        TreeNode* tp = new TreeNode();
        tp->left = bst(head, n/2);
        tp->val = list->val;
        list = list->next;
        tp->right = bst(head, n - n/2 - 1);
        return tp;
    }
    TreeNode* sortedListToBST(ListNode* head) {
        list = head;
        int n = count(head);
        return bst(head, n);
    }
};