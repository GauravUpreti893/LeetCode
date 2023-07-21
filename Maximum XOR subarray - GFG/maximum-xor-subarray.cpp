//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++
class Node{
public:
    Node* links[2];
};
class Trie{
    Node* root;
public:
    Trie()
    {
        root = new Node();
    }
    void insert(int val)
    {
        Node* curr = root;
        for (int i = 16; i >= 0; i--)
        {
            bool flag = val & (1<<i);
            if (curr->links[flag] != NULL)
            curr = curr->links[flag];
            else
            {
                curr->links[flag] = new Node();
                curr = curr->links[flag];
            }
        }
    }
    int findmax(int val)
    {
        Node* curr = root;
        int n = 0;
        for (int i = 16; i >= 0; i--)
        {
            bool flag = val & (1<<i);
            if (curr->links[flag] != NULL)
            {
                curr = curr->links[flag];
                n |= (1<<i);
            }
            else if (curr->links[!flag] != NULL)
            {
                curr = curr->links[!flag];
            }
            else
            break;
        }
        return n;
    }
};
class Solution{   
public:
    int maxSubarrayXOR(int N, int arr[]){    
        //code here
        Trie tri;
        int x = 0, ans = 0;
        tri.insert(0);
        for (int i = 0; i < N; i++)
        {
            x = x ^ arr[i];
            tri.insert(x);
            ans = max(ans, tri.findmax(~x));
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N, X;
        cin >> N;
        int arr[N];
        for(int i = 0; i < N; i++){
            cin >> arr[i];
        }

        Solution ob;
        cout << ob.maxSubarrayXOR(N, arr) << endl;
    }
    return 0; 
} 

// } Driver Code Ends