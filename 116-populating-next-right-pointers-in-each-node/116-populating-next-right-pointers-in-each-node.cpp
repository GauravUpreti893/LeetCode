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
        Node* temp, *first = root;
        while (first != NULL)
        {
            temp = first;
            first = first->left;
            while (temp != NULL)
            {
                if (temp->left != NULL)
                {
                    temp->left->next = temp->right;
                    temp->right->next = (temp->next != NULL)?temp->next->left:NULL;
                }
                temp = temp->next;
            }
        }
        return root;
    }
};