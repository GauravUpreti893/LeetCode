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
    void convert(TreeNode* root, string &ans)
    {
        if (root == NULL)
            return;
        if (root->left == NULL && root->right == NULL)
        {  
            ans += '(';
            ans += to_string(root->val);
            ans += ')';
        }
        else if (root->left == NULL)
        {
            ans += '(';
            ans += to_string(root->val);
            ans += '(';
            ans += ')';
            convert(root->right, ans);
            ans += ')';
        }
        else if (root->right == NULL)
        {
            ans += '(';
            ans += to_string(root->val);
            convert(root->left, ans);
            ans += ')';
        }
        else
        {
            ans += '(';
            ans += to_string(root->val);
            convert(root->left, ans);
            convert(root->right, ans);
            ans += ')';
        }
        return;
    }
    string tree2str(TreeNode* root) {
        string ans = to_string(root->val);
        convert(root->left, ans);
        if (root->left == NULL && root->right != NULL)
        {
            ans += '(';
            ans += ')';
        }
        convert(root->right, ans);
        return ans;
    }
};