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
    int fun(TreeNode* root, vector<int> &v)
    {
        if (root == NULL)
            return 0;
        v[root->val]++;
        int ans = 0;
        if (root->left == NULL && root->right == NULL)
        {
            int count = 0;
            for (int i = 1; i < 10; i++)
            {
                if (v[i]%2)
                    count++;
            }
            if (count < 2)
                ans++;
        }
        ans += fun(root->left, v) + fun(root->right, v);
        v[root->val]--;
        return ans;
    }
    int pseudoPalindromicPaths (TreeNode* root) {
        vector<int> v(10, 0);
        return fun(root, v);
    }
};