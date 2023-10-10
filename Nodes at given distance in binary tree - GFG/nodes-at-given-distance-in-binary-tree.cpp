//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// Tree Node
struct Node
{
    int data;
    Node* left;
    Node* right;
};

// Utility function to create a new Tree Node
Node* newNode(int val)
{
    Node* temp = new Node;
    temp->data = val;
    temp->left = NULL;
    temp->right = NULL;
    
    return temp;
}

// Function to Build Tree
Node* buildTree(string str)
{   
    // Corner Case
    if(str.length() == 0 || str[0] == 'N')
            return NULL;
    
    // Creating vector of strings from input 
    // string after spliting by space
    vector<string> ip;
    
    istringstream iss(str);
    for(string str; iss >> str; )
        ip.push_back(str);
        
    // Create the root of the tree
    Node* root = newNode(stoi(ip[0]));
        
    // Push the root to the queue
    queue<Node*> queue;
    queue.push(root);
        
    // Starting from the second element
    int i = 1;
    while(!queue.empty() && i < ip.size()) {
            
        // Get and remove the front of the queue
        Node* currNode = queue.front();
        queue.pop();
            
        // Get the current node's value from the string
        string currVal = ip[i];
            
        // If the left child is not null
        if(currVal != "N") {
                
            // Create the left child for the current node
            currNode->left = newNode(stoi(currVal));
                
            // Push it to the queue
            queue.push(currNode->left);
        }
            
        // For the right child
        i++;
        if(i >= ip.size())
            break;
        currVal = ip[i];
            
        // If the right child is not null
        if(currVal != "N") {
                
            // Create the right child for the current node
            currNode->right = newNode(stoi(currVal));
                
            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }
    
    return root;
}


// } Driver Code Ends
/* A binary Tree node
struct Node
{
    int data;
    struct Node *left, *right;
};
*/

class Solution
{
private:

public:
    unordered_map<Node*, Node*> par;
    void travel(Node* root, Node* &curr, int k, Node* p)
    {
        if (root == NULL)
        return;
        par[root] = p;
        if (root->data == k && curr == NULL)
        {
            curr = root;
        }
        travel(root->left, curr, k, root);
        travel(root->right, curr, k, root);
        return;
    }
    vector <int> KDistanceNodes(Node* root, int target , int k)
    {
        // return the sorted vector of all nodes at k dist
        Node* curr = NULL;
        travel(root, curr, target, NULL);
        queue<Node*> q;
        q.push(curr);
        unordered_map<Node*, bool> vis;
        vis[curr] = 1;
        vis[NULL] = 1;
        for (int j = 0; j < k; j++)
        {
            int n = q.size();
            for (int i = 0; i < n; i++)
            {
                Node* p = q.front();
                q.pop();
                if (vis.find(p->left) == vis.end())
                {
                    q.push(p->left);
                    vis[p->left] = 1;
                }
                if (vis.find(p->right) == vis.end())
                {
                    q.push(p->right);
                    vis[p->right] = 1;
                }
                if (vis.find(par[p]) == vis.end())
                {
                    q.push(par[p]);
                    vis[par[p]] = 1;
                }
            }
        }
        int n = q.size();
        vector<int> ans(n);
        for (int i = 0; i < n; i++)
        {
            ans[i] = q.front()->data;
            q.pop();
        }
        sort(ans.begin(), ans.end());
        return ans;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    getchar();
    
    Solution x = Solution();
    
    while(t--)
    {
        string s;
        getline(cin,s);
        Node* head = buildTree(s);
        
        int target, k;
        cin>> target >> k;
        getchar();
        
        vector <int> res = x.KDistanceNodes(head, target, k);
        
        for( int i=0; i<res.size(); i++ )
            cout<< res[i] << " ";
        cout<<endl;
    }
    return 0;
}

// } Driver Code Ends