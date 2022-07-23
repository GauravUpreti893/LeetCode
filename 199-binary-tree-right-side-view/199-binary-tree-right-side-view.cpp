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
    vector<int> rightSideView(TreeNode* root) {
        vector<int> ans;
        queue<TreeNode*> q;
        if (root == NULL)
            return ans;
        q.push(root);
        TreeNode* t;
        int n;
        while (!q.empty())
        {
            n = q.size();
            for (int i = 0; i < n; i++)
            {
                t = q.front();
                q.pop();
                if (t->left != NULL)
                    q.push(t->left);
                if (t->right != NULL)
                    q.push(t->right);
            }
            ans.push_back(t->val);
        }
        return ans;
    }
};