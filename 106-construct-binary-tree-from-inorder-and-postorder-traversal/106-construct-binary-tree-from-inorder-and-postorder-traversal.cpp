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
    TreeNode* build(vector<int>& inorder, vector<int>& postorder, int start, int end)
    {
        if (start > end)
        {
            return NULL;
        }
        TreeNode* n = new TreeNode(postorder[idx]);
        int pos = mp[postorder[idx--]];
        n->right = build(inorder, postorder, pos + 1, end);
        n->left = build(inorder, postorder, start, pos - 1);
        return n;
    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int n = postorder.size();
        for (int i = 0; i < n; i++)
        {
            mp[inorder[i]] = i;
        }
        idx = n - 1;
        return build(inorder, postorder, 0, n - 1);
    }
};