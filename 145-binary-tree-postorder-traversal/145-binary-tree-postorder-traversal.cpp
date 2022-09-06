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
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> ans;
        if (root == NULL)
            return ans;
        stack<TreeNode*> st;
        st.push(root);
        TreeNode* t;
        while (!st.empty())
        {
            t = st.top();
            if (t->val > 100)
            {
                st.pop();
                ans.push_back(t->val - 101);
                continue;
            }
            else if (t->val < -100)
            {
                st.pop();
                ans.push_back(t->val + 100);
                continue;
            }
            if (t->val >= 0)
                t->val += 101;
            else
                t->val -= 100;
            if (t->right != NULL)
                st.push(t->right);
            if (t->left != NULL)
                st.push(t->left);
        }
        return ans;
    }
};