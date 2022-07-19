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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        queue<TreeNode*> q;
        if (root == NULL)
            return ans;
        q.push(root);
        TreeNode* e;
        while (!q.empty())
        {
            vector<int> temp;
            int n = q.size();
            for (int i = 0; i < n; i++)
            {
                e = q.front();
                q.pop();
                if (e->left != NULL)
                    q.push(e->left);
                if (e->right != NULL)
                    q.push(e->right);
                temp.push_back(e->val);
            }
            ans.push_back(temp);
        }
        return ans;
    }
};