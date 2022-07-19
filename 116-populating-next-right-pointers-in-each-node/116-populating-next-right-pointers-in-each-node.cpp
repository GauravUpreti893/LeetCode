/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
        queue<Node*> q;
        if (root == NULL)
            return NULL;
        q.push(root);
        Node *temp, *prev;
        int n;
        while(!q.empty())
        {
            n = q.size();
            prev = q.front();
            if (prev->left != NULL)
            {
                q.push(prev->left);
                q.push(prev->right);
            }
            q.pop();
            for (int i = 1; i < n; i++)
            {
                temp = q.front();
                q.pop();
                prev->next = temp;
                prev = temp;
                if (temp->left != NULL)
                {
                    q.push(temp->left);
                    q.push(temp->right);
                }
            }
            prev->next = NULL;
        }
        return root;
    }
};