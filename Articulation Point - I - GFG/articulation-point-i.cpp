//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    void dfs(vector<int> *adj, vector<bool> &ans, vector<bool> &visited, int idx, int parent, int time, vector<int> &disctime, vector<int> &lowest)
    {
        visited[idx] = 1;
        disctime[idx] = time;
        lowest[idx] = time;
        bool flag = false;
        int children = 0;
        for (auto i : adj[idx])
        {
            if (!visited[i])
            {
                children++;
                dfs(adj, ans, visited, i, idx, time + 1, disctime, lowest);
                lowest[idx] = min(lowest[idx], lowest[i]);
                if (parent != -1 && lowest[i] >= disctime[idx])
                ans[idx] = true;
            }
            else if (i != parent)
            {
                lowest[idx] = min(lowest[idx], lowest[i]);
            }
        }
        if (parent == -1 && children > 1)
        ans[idx] = true;
        return;
    }
    vector<int> articulationPoints(int V, vector<int>adj[]) {
        // Code here
        vector<int> disctime(V), lowest(V);
        vector<bool> visited(V, 0), ans(V, 0);
        dfs(adj, ans, visited, 0, -1, 0, disctime, lowest);
        vector<int> res;
        for (int i = 0; i < V; i++)
        {
            if (ans[i])
            res.push_back(i);
        }
        if (!res.size())
        res.push_back(-1);
        return res;
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
			adj[v].push_back(u);
		}
		Solution obj;
		vector<int> ans = obj.articulationPoints(V, adj);
		for(auto i: ans)cout << i << " ";
		cout << "\n";
	}
	return 0;
}
// } Driver Code Ends