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
    vector<string> sum(TreeNode* root)
    {
        char c;
        if (root == NULL)
        {
            vector<string> v;
            return v;
        } 
        vector<string> left = sum(root->left);
        vector<string> right = sum(root->right);
        if (left.size() == 0 && right.size() == 0) // Leaf Node
        {
            vector<string> v;
            string s;
            c = root->val + '0';
            s += c;
            v.push_back(s);
            return v;
        }
        int n = left.size();
        int m = right.size();
        vector<string> v(n + m);
        for (int i = 0; i < n; i++)
        {
            c = root->val + '0';
            v[i] += c + left[i];
        }
        for (int i = 0; i < m; i++)
        {
            c = root->val + '0';
            v[i + n] += c + right[i];
        }
        return v;
    }
    int sumNumbers(TreeNode* root) {
        vector<string> v = sum(root);
        int n = v.size();
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            ans += stoi(v[i]);
        }
        return ans;
    }
};