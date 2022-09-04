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
    void func(TreeNode* root, map<int, vector<pair<int, int>>> &mp, int l, int c)
    {
        if (root == NULL)
            return;
        mp[c].push_back({l, root->val});
        func(root->left, mp, l + 1, c - 1);
        func(root->right, mp, l + 1, c + 1);
        return;
    }
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        map<int, vector<pair<int,int>>> mp;
        vector<vector<int>> ans;
        func(root, mp, 0, 0);
        for (auto it = mp.begin(); it != mp.end(); it++)
        {
            vector<int> v;
            sort(it->second.begin(), it->second.end());
            int n = it->second.size();
            for (int i = 0; i < n; i++)
            {
                v.push_back(it->second[i].second);
            }
            ans.push_back(v);
        }
        return ans;
    }
};