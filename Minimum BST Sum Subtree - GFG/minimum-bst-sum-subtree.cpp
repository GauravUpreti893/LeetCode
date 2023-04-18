//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }

    Node *buildTree(string s) {
        if (s.length() == 0 || s[0] == 'N') return NULL;

        // Create the root of the tree
        vector<string> str;
        istringstream iss(s);
        for (string s; iss >> s;) str.push_back(s);
        Node *root = new Node(stoi(str[0]));

        // Push the root to the queue
        queue<Node*> q;
        q.push(root);

        // Starting from the second element
        int i = 1;
        while (q.size() > 0 && i < str.size()) {

            // Get and remove the front of the queue
            Node *currNode = q.front();
            q.pop();

            // Get the current node's value from the string
            string currVal = str[i];

            // If the left child is not null
            if (currVal != "N") {

                // Create the left child for the current node
                currNode->left = new Node(stoi(currVal));
                // Push it to the queue
                q.push(currNode->left);
            }

            // For the right child
            i++;
            if (i >= str.size()) break;

            currVal = str[i];

            // If the right child is not null
            if (currVal != "N") {

                // Create the right child for the current node
                currNode->right = new Node(stoi(currVal));

                // Push it to the queue
                q.push(currNode->right);
            }
            i++;
        }

        return root;
    }

    void inorder(Node *root) {
        if (root == NULL) return;
        inorder(root->left);
        cout<<root->data<<" ";
        inorder(root->right);
    }
};


// } Driver Code Ends
//User function Template for C++

class Solution {
public:
    vector<int> minsubtree(Node* root, int target, int &ans)
    {
        vector<int> left, right;
        if (root->left == NULL && root->right == NULL)
        {
            if (root->data == target)
            {
                ans = 1;
            } 
            return {1, 1, root->data, root->data, root->data};
        }
        else if (root->right == NULL)
        {
            left = minsubtree(root->left, target, ans);
            bool res = false;
            if (root->data > left[4])
            res = true;
            if (left[0] && res)
            {
                if (root->data + left[2] == target)
                {
                    ans = min(ans, 1 + left[1]);
                }
            }
            
            return {res && left[0], left[1] + 1, root->data + left[2], left[3], root->data};
        }
        else if (root->left == NULL)
        {
            right = minsubtree(root->right, target, ans);
            bool res = false;
            if (root->data < right[3])
            res = true;
            if (right[0] && res)
            {
                if (root->data + right[2] == target)
                {
                    ans = min(ans, 1 + right[1]);
                }
            }
            
            return {res && right[0], right[1] + 1, root->data + right[2], root->data, right[4]};
        }
        else
        {
            left = minsubtree(root->left, target, ans);
            right = minsubtree(root->right, target, ans);
            bool res = false;
            if (root->data > left[4] && root->data < right[3])
            res = true;
            if (left[0] && right[0] && res)
            {
                if (root->data + left[2] + right[2] == target)
                {
                    ans = min(ans, 1 + left[1] + right[1]);
                }
            }
            return {res && left[0] && right[0], left[1] + right[1] + 1, root->data + left[2] + right[2], left[3], right[4]};
        }
        
    }
    int minSubtreeSumBST(int target, Node *root) {
        // code here
        int ans = 1e5 + 1;
        minsubtree(root, target, ans);
        if (ans == 1e5 + 1)
        return -1;
        return ans;
    }
};

//{ Driver Code Starts.


int main(){
    
    int t;
    cin>>t;
    while(t--){
        int target;
        cin>>target;
        string str;
        getline(cin,str);
        getline(cin,str);
        Node node(0);
        Node *root = node.buildTree(str);
        Solution ob;
        int res = ob.minSubtreeSumBST(target, root);
        cout<<res<<endl;
    }
    return 0;
}
// } Driver Code Ends