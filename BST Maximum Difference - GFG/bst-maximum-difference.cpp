//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;
#define MAX_HEIGHT 100000

// Tree Node
struct Node {
    int data;
    Node *right;
    Node *left;

    Node(int x) {
        data = x;
        right = NULL;
        left = NULL;
    }
};

Node *insert(Node *tree, int val) {
    Node *temp = NULL;
    if (tree == NULL) return new Node(val);

    if (val < tree->data) {
        tree->left = insert(tree->left, val);
    } else if (val > tree->data) {
        tree->right = insert(tree->right, val);
    }

    return tree;
}


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    Node* target_node;
    int sum;
    int calculate(Node* root)
    {
        if (root == NULL)
        return 1e9;
        if (root->left == NULL && root->right == NULL)
        return root->data;
        return root->data + min(calculate(root->left), calculate(root->right));
    }
    int calculate1(Node* root)
    {
        if (root == NULL)
        return 0;
        return root->data + max(calculate1(root->left), calculate1(root->right));
    }
    bool searchbst(Node* root, int target, int dis)
    {
        if (root->data == target)
        {
            target_node = root;
            sum = dis;
            return true;
        }
        else if (root->data > target)
        {
            if (root->left == NULL)
            return false;
            return searchbst(root->left, target, dis + root->data);
        }
        else
        {
            if (root->right == NULL)
            return false;
            return searchbst(root->right, target, dis + root->data);
        }
        return false;
    }
    int maxDifferenceBST(Node *root,int target){
        // Code here
        target_node = NULL;
        sum = 0;
        searchbst(root, target, 0);
        if (target_node == NULL)
        return -1;
        return max(sum - (calculate(target_node) - target), sum - (calculate1(target_node) - target));
    }
};

//{ Driver Code Starts.

int main() {
    int T;
    cin >> T;
    while (T--) {
        Node *root = NULL;

        int N;
        cin >> N;
        for (int i = 0; i < N; i++) {
            int k;
            cin >> k;
            root = insert(root, k);
        }

        int target;
        cin >> target;
        Solution ob;
        cout << ob.maxDifferenceBST(root, target);
        cout << endl;
    }
}
// } Driver Code Ends