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
    bool construct(TreeNode* root)
    {
        if (root == NULL)
            return false;
        bool a = construct(root->left);
        if (!a)
            root->left = NULL;
        bool b = construct(root->right);
        if (!b)
            root->right = NULL;
        if (a || b || root->val)
            return true;
        else
        {
            return false;
        }
    }
    TreeNode* pruneTree(TreeNode* root) {
        construct(root);
        if (!root->val && root->left == NULL && root->right == NULL)
            return NULL;
        return root;
    }
};