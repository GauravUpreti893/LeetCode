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
    int path(TreeNode* root, long long int csum, int sum)
    {
        if (root == NULL)
            return 0;
        csum += root->val;
        return !(sum - csum) + path(root->left, csum, sum) + path(root->right, csum, sum);
    }
    int pathSum(TreeNode* root, int targetSum) {
        if (root == NULL)
            return 0;
        return pathSum(root->left, targetSum) + pathSum(root->right, targetSum) + path(root, 0, targetSum);
    }
};