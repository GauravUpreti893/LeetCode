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
    TreeNode* toflat(TreeNode* root)
    {
        if (root == NULL)
            return NULL;
        if (root->left == NULL && root->right == NULL)
            return root;
        TreeNode* lastleft = toflat(root->left);
        TreeNode* lastright = toflat(root->right);
        if (root->left != NULL || lastleft != NULL)
        {
            TreeNode* temp = root->right;
            root->right = root->left;
            root->left = NULL;
            lastleft->right = temp;
        }
        if (lastright == NULL)
            return lastleft;
        return lastright;
    }
    void flatten(TreeNode* root) {
        toflat(root);
        return;
    }
};