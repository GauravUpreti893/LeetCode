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
    vector<string> ans;
    vector<int> v;
    void path(TreeNode* root)
    {
        if (root == NULL)
            return;
        v.push_back(root->val);
        if (root->left == NULL && root->right == NULL)
        {
            string s;
            int n = v.size();
            for (int i = 0; i < n; i++)
            {
                s += to_string(v[i]);
                if (i != n - 1)
                    s += "->";
            }
            ans.push_back(s);
        }
        path(root->left);
        path(root->right);
        v.pop_back();
        return;
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        if (root == NULL)
            return ans;
        path(root);
        return ans;
    }
};