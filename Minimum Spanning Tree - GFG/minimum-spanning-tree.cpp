// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution
{
	public:
	//Function to find sum of weights of edges of the Minimum Spanning Tree.
    int get_leader(int x, vector<int> &leader)
    {
        if (x == leader[x])
        return x;
        return leader[x] = get_leader(leader[x], leader);
    }
	void dfs(vector<vector<int>>* &adj, vector<int> &visit, vector<pair<int,pair<int,int>>> &edge, int p)
	{
	    visit[p] = 1;
	    for (auto i : adj[p])
	    {
	        edge.push_back(make_pair(i[1], make_pair(p,i[0])));
	        if (!visit[i[0]])
	        {
	            dfs(adj, visit, edge,i[0]);
	        }
	    }
	}
    int spanningTree(int V, vector<vector<int>> adj[])
    {
        // code here
        vector<int> visit(V, 0), size(V, 1), leader(V);
        for (int i = 0; i < V; i++)
        {
            leader[i] = i;
        }
        vector<pair<int,pair<int,int>>> edge;
        dfs(adj,visit,edge,0);
        int n = edge.size();
        sort(edge.begin(), edge.end());
        int sum = 0;
        int l, d;
        for (int i = 0; i < n; i++)
        {
            l = get_leader(edge[i].second.first, leader);
            d = get_leader(edge[i].second.second, leader);
            if (l != d)
            {
                if (size[l] < size[d])
            {
                swap(l, d);
            }
            size[l] += size[d];
                leader[d] = l;
                sum += edge[i].first;
            }
        }
        return sum;
        
    }
};

// { Driver Code Starts.


int main()
{
    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;
        vector<vector<int>> adj[V];
        int i=0;
        while (i++<E) {
            int u, v, w;
            cin >> u >> v >> w;
            vector<int> t1,t2;
            t1.push_back(v);
            t1.push_back(w);
            adj[u].push_back(t1);
            t2.push_back(u);
            t2.push_back(w);
            adj[v].push_back(t2);
        }
        
        Solution obj;
    	cout << obj.spanningTree(V, adj) << "\n";
    }

    return 0;
}

  // } Driver Code Ends