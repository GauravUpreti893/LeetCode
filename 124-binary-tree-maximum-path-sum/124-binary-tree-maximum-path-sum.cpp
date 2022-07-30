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
    int ans;
    Solution(){
        ans = -1000;
    }
    int traversal(TreeNode* root)
    {
        if (root == NULL)
            return 0;
        int left = traversal(root->left);
        int right = traversal(root->right);
        int res;
        if (left > 0 && right > 0)
        {
            ans = max(ans, left + right + root->val);
            res = max(left, right) + root->val;
        }
        if (left > 0 || right > 0)
        {
            res = max(left, right) + root->val;
            ans = max(ans, res);
        }
        else
        {
            res = root->val;
            ans = max(ans, res);
        }
        return res;
    }
    int maxPathSum(TreeNode* root) {
        traversal(root);
        return ans;
    }
};