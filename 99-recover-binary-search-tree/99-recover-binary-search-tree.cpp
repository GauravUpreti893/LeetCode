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
    TreeNode* first, *last, *prev;
    Solution()
    {
        first = NULL;
        last = NULL;
        prev = new TreeNode(INT_MIN);
    }
    void inorder(TreeNode* root)
    {
        if (root == NULL)
            return;
        inorder(root->left);
        if (root->val < prev->val)
        {
            if (first == NULL)
            {
                first = prev;
                // cout<<first->val<<endl;
            }
            if (first != NULL)
            {
                last = root;
                // cout<<last->val<<endl;
            }
        }
        prev = root;
        cout<<prev->val<<endl;
        inorder(root->right);
        return;
    }
    void recoverTree(TreeNode* root) {
        inorder(root);
        swap(first->val, last->val);
        return;
    }
};