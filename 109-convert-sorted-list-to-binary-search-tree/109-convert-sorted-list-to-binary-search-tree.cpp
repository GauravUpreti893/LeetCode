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
    TreeNode* bst (int n)
    {
        if (n == 0)
            return NULL;
        TreeNode* tp = new TreeNode();
        tp->left = bst(n/2);
        tp->val = list->val; // We are doing inorder traversal in tree, so every list item will be placed at correct position as list is also an inorder traversal.
        list = list->next;
        tp->right = bst(n - n/2 - 1);
        return tp;
    }
    TreeNode* sortedListToBST(ListNode* head) {
        list = head;
        int n = count(head); // Count no of nodes in list
        return bst(n);
    }
};