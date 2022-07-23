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
    // We will be doing level order traversal to find and group all the nodes with same distance from root horizontally.
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        vector<vector<int>> ans;
        map<int, vector<int> > mp;
        queue<pair<TreeNode*, int>> q;
        if (root == NULL)
            return ans;
        q.push({root, 0});
        pair<TreeNode*, int> p;
        int n;
        while (!q.empty())
        {
            n = q.size();
            unordered_map<int, vector<int> > temp;
            for (int i = 0; i < n; i++)
            {
                p = q.front();
                q.pop();
                temp[p.second].push_back(p.first->val);
                if (p.first->left != NULL)
                    q.push({p.first->left, p.second - 1});
                if (p.first->right != NULL)
                    q.push({p.first->right, p.second + 1});
            }
            for (auto it = temp.begin(); it != temp.end(); it++)
            {
                sort(it->second.begin(), it->second.end());
                for (auto itr : it->second)
                    mp[it->first].push_back(itr);
            }              
        }
        for (auto it = mp.begin(); it != mp.end(); it++)
        {
            ans.push_back(it->second);
        }
        return ans;
    }
};