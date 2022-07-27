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
    long long int ans, sum, mod;
    Solution(){
        sum = 0;
        ans = 0;
        mod = 1e9 + 7;
    }
    int totalsum(TreeNode* root)
    {
        if (root == NULL)
            return 0;
        int left = totalsum(root->left);
        int right = totalsum(root->right);
        return left + right + root->val;
    }
    int breaktree(TreeNode* root)
    {
        if (root == NULL)
            return 0;
        int left = breaktree(root->left);
        int right = breaktree(root->right);
        long long int x = left + right + root->val;
        ans = max(ans, (x * (sum - x)));
        return x;
    }
    int maxProduct(TreeNode* root) {
        sum = totalsum(root);
        breaktree(root);
        return ans % mod;
    }
};