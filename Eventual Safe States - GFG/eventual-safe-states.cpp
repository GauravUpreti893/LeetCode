//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    vector<int> vis;
    bool dfs(vector<int> adj[], int par)
    {
        if (vis[par] != -1)
        return vis[par];
        vis[par] = 0;
        bool res = true;
        for (auto child : adj[par])
        {
            res &= dfs(adj, child);
        }
        return vis[par] = res;
    }
    vector<int> eventualSafeNodes(int V, vector<int> adj[]) {
        // code here
        vis = vector<int> (V, -1);
        for (int i = 0; i < V; i++)
        dfs(adj, i);
        vector<int> ans;
        for (int i = 0; i < V; i++)
        {
            if (vis[i])
            ans.push_back(i);
        }
        return ans;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {

        int V, E;
        cin >> V >> E;
        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
        }

        Solution obj;
        vector<int> safeNodes = obj.eventualSafeNodes(V, adj);
        for (auto i : safeNodes) {
            cout << i << " ";
        }
        cout << endl;
    }
}

// } Driver Code Ends