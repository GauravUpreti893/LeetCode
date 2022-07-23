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
    vector<int> ans;
    void rightview(TreeNode* root, int level)
    {
        if (root == NULL)
            return;
        if (ans.size() < level)
        {
            ans.push_back(root->val);
        }
        rightview(root->right, level + 1);
        rightview(root->left, level + 1);
        return;
    }
    vector<int> rightSideView(TreeNode* root) {
        rightview(root, 1);
        return ans;
    }
};