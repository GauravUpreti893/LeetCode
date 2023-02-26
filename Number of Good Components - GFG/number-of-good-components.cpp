//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    void dfs(vector<vector<int>> &adj, int parent, vector<bool> &vis, vector<int> &arr)
    {
        vis[parent] = 1;
        arr.push_back(parent);
        for (auto child : adj[parent])
        {
            if (!vis[child])
            {
                dfs(adj, child, vis, arr);
            }
        }
        return;
    }
    int findNumberOfGoodComponent(int V, vector<vector<int>>& adj) {
        // code here
        vector<bool> vis(V + 1, 0);
        int ans = 0;
        vector<int> degree(V + 1, 0);
        for (int i = 1; i <= V; i++)
        {
            if (!vis[i])
            {
                vector<int> arr;
                dfs(adj, i, vis, arr);
                
                for (auto parent : arr)
                {
                    for (auto child : adj[parent])
                    {
                        degree[child]++;
                    }
                }
                bool flag = true;
                int m = arr.size();
                for (int i = 0; i < m; i++)
                {
                    if (degree[arr[i]] != m - 1)
                    {
                        flag = false;
                        break;
                    }
                }
                if (flag)
                ans++;
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int E, V;
        cin >> E >> V;
        vector<vector<int>> adj(V + 1, vector<int>());
        for (int i = 0; i < E; i++) {
            int u, v;

            cin >> u >> v;

            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        Solution obj;

        int res = obj.findNumberOfGoodComponent(V, adj);
        cout << res << "\n";
    }
    return 0;
}
// } Driver Code Ends