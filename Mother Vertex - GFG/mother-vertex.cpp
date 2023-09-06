//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution 
{
    public:
    //Function to find a Mother Vertex in the Graph.
    int dfs(vector<int> adj[], int par, vector<bool> &vis)
    {
        vis[par] = 1;
        int ans = 1;
        for (auto child : adj[par])
        {
            if (!vis[child])
            ans += dfs(adj, child, vis);
        }
        return ans;
    }
	int findMotherVertex(int V, vector<int>adj[])
	{
	    // Code here
	   vector<bool> vis(V, 0);
	   int ans = 0;
	    for (int i = 0; i < V; i++)
	    {
	        if (!vis[i])
	        {
	            ans = i;
	            dfs(adj, i, vis);
	        }
	    }
	    for (int i = 0; i < V; i++)
	    vis[i] = 0;
	    if (dfs(adj, ans, vis) == V)
	    return ans;
	    return -1;
	}

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int V, E;
		cin >> V >> E;
		vector<int>adj[V];
		for(int i = 0; i < E; i++){
			int u, v;
			cin >> u >> v;
			adj[u].push_back(v);
		}
		Solution obj;
		int ans = obj.findMotherVertex(V, adj);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends