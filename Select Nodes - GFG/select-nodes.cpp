//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++

class Solution{
  public:
    bool count(vector<vector<int>> &adj, int p, int gp, int &ans)
    {
        bool flag = true;
        for (auto i : adj[p])
        {
            if (i == gp)
            continue;
            bool res = count(adj, i, p, ans);
            if (!res)
            flag = false;
        }
        if (!flag)
        ans++;
        return !flag;
    }
    int countVertex(int N, vector<vector<int>>&edges){
        // code here
        vector<vector<int>> adj(N + 1);
        for (int i = 0; i < N - 1; i++)
        {
            int x = edges[i][0];
            int y = edges[i][1];
            adj[x].push_back(y);
            adj[y].push_back(x);
        }
        int p = edges[0][0];
        int ans = 0;
        count(adj, p, -1, ans);
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
        int N;
        cin >> N;
        vector<vector<int>>edges;
        for(int i = 0; i < N-1; i++){
            int x,y;
            cin >> x >> y;
            vector<int> edge;
            edge.push_back(x);
            edge.push_back(y);
            edges.push_back(edge);
        }
        
        Solution ob;
        cout << ob.countVertex(N, edges) << endl;
    }
    return 0; 
} 
// } Driver Code Ends