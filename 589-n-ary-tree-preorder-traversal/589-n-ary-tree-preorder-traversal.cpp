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
    vector<int> preorder(Node* root) {
        vector<int> ans;
        if (root == NULL)
            return ans;
        stack<Node*> st;
        st.push(root);
        Node* t;
        int n;
        while (!st.empty())
        {
            t = st.top();
            st.pop();
            ans.push_back(t->val);
            n = t->children.size();
            for (int i = n - 1; i >= 0; i--)
            {
                if (t->children[i] != NULL)
                st.push(t->children[i]);
            }
        }
        return ans;
    }
};