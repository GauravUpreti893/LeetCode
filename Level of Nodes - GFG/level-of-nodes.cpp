//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
	public:
	//Function to find the level of node X.
	int nodeLevel(int V, vector<int> adj[], int X) 
	{
	    // code here
	    queue<int> q;
	    q.push(0);
	    int level = 1;
	    vector<bool> vis(V, 0);
	    vis[0] = 1;
	    while (!q.empty())
	    {
	        int n = q.size();
	        for (int i = 0; i < n; i++)
	        {
	            int par = q.front();
	            q.pop();
	            for (auto child : adj[par])
	            {
	                if (vis[child])
	                continue;
	                vis[child] = 1;
	                if (child == X)
	                return level;
	                q.push(child);
	            }
	        }
	        level++;
	    }
	    return -1;
	}
};

//{ Driver Code Starts.


int main()
{
    
    int t;
    cin >> t;
    while(t--)
    {
    	int V, E, X;
    	cin >> V >> E;

    	vector<int> adj[V];

    	for(int i = 0; i < E; i++)
    	{
    		int u, v;
    		cin >> u >> v;
    		adj[u].push_back(v);
    		adj[v].push_back(u);
    	}
    	cin>>X;

    	Solution obj;
    	cout << obj.nodeLevel(V, adj, X) << "\n";
    }

    return 0;
}


// } Driver Code Ends