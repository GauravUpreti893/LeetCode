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
    int countNodes(TreeNode* root) {
        if (root == NULL)
            return 0;
        TreeNode* tleft = root->left, *tright = root->right;
        int nleft = 0, nright = 0;
        while (tleft != NULL)
        {
            tleft = tleft->left;
            nleft++;
        }
        while (tright != NULL)
        {
            tright = tright->right;
            nright++;
        }
        if (nleft == nright)
        {
            return pow(2, nleft + 1) - 1;
        }
        return countNodes(root->left) + countNodes(root->right) + 1;
    }
};