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
    bool find(TreeNode* root, int k, unordered_map<int, int>&mp)
    {
        if (root == NULL)
            return false;
        if (mp[k - root->val])
            return true;
        mp[root->val] = 1;
        if (k - root->val < root->val)
        {
            bool a = find(root->left, k, mp);
            if (a)
                return true;
            return find(root->right, k, mp);
        }
        else
        {
            bool a = find(root->right, k, mp);
            if (a)
                return true;
            return find(root->left, k, mp);
        }
    }
    bool findTarget(TreeNode* root, int k) {
        unordered_map<int, int> mp;
        return find(root, k, mp);
    }
};