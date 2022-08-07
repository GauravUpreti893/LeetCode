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
    TreeNode* construct(vector<int>&preorder, vector<int>&postorder, int &preidx, int &postidx, int n1)
    {
        if (preidx == n1)
            return NULL;
        TreeNode* n = new TreeNode(preorder[preidx++]);
        if (n->val != postorder[postidx])
        {
            n->left = construct(preorder, postorder, preidx, postidx, n1);
        }
        if (n->val != postorder[postidx])
        {
            n->right = construct(preorder, postorder, preidx, postidx, n1);
        }
        postidx++;
        return n;
    }
    TreeNode* constructFromPrePost(vector<int>& preorder, vector<int>& postorder) {
        int preidx = 0, postidx = 0;
        int n = preorder.size();
        return construct(preorder, postorder, preidx, postidx,n);
    }
};