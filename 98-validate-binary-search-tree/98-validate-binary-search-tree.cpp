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
    TreeNode* prev;
    Solution(){
        prev = NULL;
    }
    bool isValidBST(TreeNode* root) {
        if (root == NULL)
            return true;
        bool a = isValidBST(root->left);
        if (!a)
            return false;
        if (prev != NULL)
        {
            if (prev->val >= root->val)
                return false;
        }
        prev = root;
        return isValidBST(root->right);
    }
};