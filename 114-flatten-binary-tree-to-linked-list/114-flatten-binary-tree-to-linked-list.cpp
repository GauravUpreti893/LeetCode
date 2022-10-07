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
    TreeNode* flat(TreeNode* root)
    {
        if (root == NULL)
        return NULL;
        if (root->left == NULL && root->right == NULL)
        return root;
        TreeNode* right = root->right;
        TreeNode* left = root->left, *last;
        if (root->left != NULL)
        {
            root->right = root->left;
            root->left = NULL;
            last = flat(left);
            if (last != NULL)
            last->right = right;
        }
        TreeNode* t = flat(right);
        if (t != NULL)
            return t;
        if (t == NULL && last != NULL)
            return last;
        else if (t == NULL && last == NULL)
            return root;
        return t;
    }
    void flatten(TreeNode* root) {
        flat(root);
        return;
    }
};