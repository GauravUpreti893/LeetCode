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
    int idx;
    unordered_map<int,int> mp;
    TreeNode* build(vector<int>& preorder, vector<int>& inorder, int start, int end)
    {
        if (start > end)
            return NULL;
        TreeNode* n = new TreeNode(preorder[idx]);
        int pos = mp[preorder[idx++]];
        n->left = build(preorder, inorder, start, pos - 1);
        n->right = build(preorder, inorder, pos + 1, end);
        return n;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int n = preorder.size();
        idx = 0;
        for (int i = 0; i < n; i++)
        {
            mp[inorder[i]] = i;
        }
        return build(preorder, inorder, 0, n - 1);
    }
};