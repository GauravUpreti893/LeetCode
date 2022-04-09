class Solution {
public:
    int findTheCity(int n, vector<vector<int>>& edges, int distanceThreshold) {
        int max = 1e6 + 1;
        vector<vector<int>> adj(n,vector<int>(n,max));
        int m = edges.size();
        for (int i = 0; i < m; i++)
        {
            adj[edges[i][0]][edges[i][1]] = edges[i][2];  
            adj[edges[i][1]][edges[i][0]] = edges[i][2];  
        }
        for (int i = 0; i < n; i++)
            adj[i][i] = 0;
        for (int k = 0; k < n; k++)
        {
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    adj[i][j] = min(adj[i][j],adj[i][k] + adj[k][j]);
                }
            }
        }
        int ans = 0,count = 0,mn = 101;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (adj[i][j] <= distanceThreshold)
                    count++;
            }
            if (count <= mn)
            {
                mn = count;
                ans = i;
                // cout<<ans<<mn<<endl;
            }
            count = 0;
        }
        return ans;
        
    }
};