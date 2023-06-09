//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
	//Function to find number of strongly connected components in the graph.
	stack<int> st;
	void dfs(vector<vector<int>> &adj, int par, vector<bool> &vis)
	{
	    vis[par] = 1;
	    for (auto child : adj[par])
	    {
	        if (!vis[child])
	        {
	            dfs(adj, child, vis);
	        }
	    }
	    st.push(par);
	    return;
	}
	void dfs1(vector<vector<int>> &adj, int par, vector<bool> &vis)
	{
	    vis[par] = 1;
	    for (auto child : adj[par])
	    {
	        if (!vis[child])
	        {
	            dfs(adj, child, vis);
	        }
	    }
	    return;
	}
    int kosaraju(int V, vector<vector<int>>& adj)
    {
        //code here
        vector<bool> vis(V, 0);
        for (int i = 0; i < V; i++)
        {
            if (!vis[i])
            {
                dfs(adj, i, vis);
            }
        }
        vector<vector<int>> revadj(V);
        for (int i = 0; i < V; i++)
        {
            vis[i] = 0;
            for (auto j : adj[i])
            {
                revadj[j].push_back(i);
            }
        }
        int ans = 0;
        while (!st.empty())
        {
            int par = st.top();
            st.pop();
            if (vis[par])
            continue;
            ans++;
            dfs1(revadj, par, vis);
        }
        return ans;
    }
};

//{ Driver Code Starts.


int main()
{
    
    int t;
    cin >> t;
    while(t--)
    {
    	int V, E;
    	cin >> V >> E;

    	vector<vector<int>> adj(V);

    	for(int i = 0; i < E; i++)
    	{
    		int u, v;
    		cin >> u >> v;
    		adj[u].push_back(v);
    	}

    	Solution obj;
    	cout << obj.kosaraju(V, adj) << "\n";
    }

    return 0;
}


// } Driver Code Ends