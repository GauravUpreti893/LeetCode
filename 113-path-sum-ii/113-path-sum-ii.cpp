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
    vector<vector<int>> ans;
    vector<int> v;
    void path(TreeNode* root, int sum)
    {
        v.push_back(root->val);
        if (root->left == NULL && root->right == NULL && !sum)
        {
            ans.push_back(v);
        }
        if (root->left != NULL)
        path(root->left, sum - root->left->val);
        if (root->right != NULL)
        path(root->right, sum - root->right->val);
        v.pop_back();
        return;
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        if (root == NULL)
            return ans;
        path(root, targetSum - root->val);
        return ans;
    }
};