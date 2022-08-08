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
    pair<int,int> zigzag(TreeNode* root, int &res)
    {
        if (root == NULL)
            return {-1,-1};
        pair<int,int> left = zigzag(root->left, res);
        pair<int,int> right = zigzag(root->right, res);
        res = max(res, max(left.second, right.first) + 1);
        return {left.second + 1, right.first + 1};
    }
    int longestZigZag(TreeNode* root) {
        int res = 0;
        zigzag(root, res);
        return res;
    }
};