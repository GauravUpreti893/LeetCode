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
    int sum(TreeNode* root, int s)
    {
        if (root == NULL)
            return 0;
        if (root->left == NULL && root->right == NULL)
        {
            return 10*s + root->val;
        }
        return sum(root->left, 10*s + root->val) + sum(root->right, 10*s + root->val);
    }
    int sumNumbers(TreeNode* root) {
        return sum(root, 0);
    }
};