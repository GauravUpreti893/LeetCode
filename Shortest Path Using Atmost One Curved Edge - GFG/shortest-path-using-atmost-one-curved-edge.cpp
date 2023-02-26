//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int shortestPath(int n, int m, int a, int b, vector<vector<int>> &edges) {
        // code here
        vector<vector<pair<int, int>>> adj(n + 1);
        for (int i = 0; i < m; i++)
        {
            int x = edges[i][0];
            int y = edges[i][1];
            int w1 = edges[i][2];
            int w2 = edges[i][3];
            adj[x].push_back({y, w1});
            adj[y].push_back({x, w1});
        }
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        pq.push({0, a});
        vector<int> disa(n + 1, 1e9), disb(n + 1, 1e9);
        disa[a] = 0;
        while (!pq.empty())
        {
            int d = pq.top().first;
            int par = pq.top().second;
            pq.pop();
            for (auto c : adj[par])
            {
                int child = c.first;
                int weight = c.second;
                if (disa[child] > (d + weight))
                {
                    disa[child] = d + weight;
                    pq.push({disa[child], child});
                }
            }
            
        }
        disb[b] = 0;
        pq.push({0, b});
         while (!pq.empty())
        {
            int d = pq.top().first;
            int par = pq.top().second;
            pq.pop();
            for (auto c : adj[par])
            {
                int child = c.first;
                int weight = c.second;
                if (disb[child] > (d + weight))
                {
                    disb[child] = d + weight;
                    pq.push({disb[child], child});
                }
            }
            
        }
        if (disa[b] == 1e9)
        return -1;
        int ans = disa[b];
        for (int i = 0; i < m; i++)
        {
            int x = edges[i][0];
            int y = edges[i][1];
            int w = edges[i][3];
            ans = min(ans, disa[x] + w + disb[y]);
            ans = min(ans, disa[y] + w + disb[x]);
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,m,a,b;
        cin>>n>>m;
        cin>>a>>b;
        
        vector<vector<int>> edges;
        
        for(int i=0; i<m; i++)
        {
            int u,v,x,y;
            cin>>u>>v>>x>>y;
            edges.push_back({u,v,x,y});
        }

        Solution ob;
        cout << ob.shortestPath(n,m,a,b,edges) << endl;
    }
    return 0;
}
// } Driver Code Ends