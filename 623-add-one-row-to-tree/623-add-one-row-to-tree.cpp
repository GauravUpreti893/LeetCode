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
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        queue<TreeNode*> q;
        q.push(root);
        int n;
        TreeNode* top;
        if (depth == 1)
        {
            TreeNode* newhead = new TreeNode(val);
            newhead->left = root;
            return newhead;
        }
        for (int i = 1; i < depth - 1; i++)
        {
            n = q.size();
            for (int j = 0; j < n; j++)
            {
                top = q.front();
                q.pop();
                if (top->left)
                    q.push(top->left);
                if (top->right != NULL)
                    q.push(top->right);
            }
        }
        n = q.size();
        for (int i = 0; i < n; i++)
        {
            top = q.front();
            cout<<top->val<<endl;
            q.pop();
            TreeNode* newn1 = new TreeNode(val);
            TreeNode* newn2 = new TreeNode(val);
            newn1->left = top->left;
            newn2->right = top->right;
            top->left = newn1;
            top->right = newn2;
        }
        return root;
    }
};