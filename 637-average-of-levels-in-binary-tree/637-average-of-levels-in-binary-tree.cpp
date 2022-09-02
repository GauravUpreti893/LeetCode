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
    void getsum(TreeNode* root, int idx, vector<double> &sum, vector<double> &count)
    {
        if (root == NULL)
            return;
        if (idx > sum.size())
        {
            sum.push_back(root->val);
            count.push_back(1);
        }
        else
        {
            sum[idx - 1] += root->val;
            count[idx - 1]++;
        }
        getsum(root->left, idx + 1, sum, count);
        getsum(root->right, idx + 1, sum, count);
        return;
    }
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> sum, count;
        getsum(root, 1, sum , count);
        int n = sum.size();
        for (int i = 0; i < n; i++)
        {
            sum[i] /= (count[i]/1.0);
        }
        return sum;
    }
};