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
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans;
        stack<TreeNode*> st;
        if (root == NULL)
            return ans;
        st.push(root);
        TreeNode* t;
        while (!st.empty())
        {
            t = st.top();
            st.pop();
            if (t->val > 100)
            {
                ans.push_back(t->val - 300);
                continue;
            }
            if (t->right != NULL)
                st.push(t->right);
            t->val = t->val + 300;
            st.push(t);
            if (t->left != NULL)
                st.push(t->left);
        }
        return ans;
    }
};