/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        vector<vector<int>> ans;
        if (root == NULL)
            return ans;
        queue<Node*> q;
        q.push(root);
        Node* t;
        int n, m;
        while (!q.empty())
        {
            n = q.size();
            vector<int> v(n);
            for (int i = 0; i < n; i++)
            {
                t = q.front();
                v[i] = t->val;
                q.pop();
                m = t->children.size();
                for (int j = 0; j < m; j++)
                {
                    if (t->children[j] != NULL)
                    q.push(t->children[j]);
                }
            }
            ans.push_back(v);
            
        }
        return ans;
    }
};