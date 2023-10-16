//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class DisjointSet
{
public:
    vector<int> parent, size;
    DisjointSet(int n)
    {
        parent = vector<int> (n + 1);
        for (int i = 0; i <= n; i++)
        parent[i] = i;
        size = vector<int> (n + 1, 1);
    }    
    int findUPar(int u)
    {
        if (parent[u] == u)
        return u;
        return parent[u] = findUPar(parent[u]);
    }
    bool unionBySize(int u, int v)
    {
        int up_u = findUPar(u);
        int up_v = findUPar(v);
        if (up_u == up_v)
        return false;
        else if (size[up_u] >= size[up_v])
        {
            parent[up_v] = up_u;
		size[up_u] += size[up_v];
        }
        else
        {
            parent[up_u] = up_v;
		size[up_v] += size[up_u];
        }
        return true;
    }
};
class Solution
{
public:
    int largestIsland(vector<vector<int>>& grid) 
    {
        // Your code goes here.
        int n = grid.size(), ans = 0;
        DisjointSet dsu(n*n);
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (grid[i][j])
                {
                    if (i && grid[i - 1][j])
                    dsu.unionBySize(i*n + j, (i - 1)*n + j);
                    if (j && grid[i][j - 1])
                    dsu.unionBySize(i*n + j, i*n + j - 1);
                    ans = max(ans, dsu.size[dsu.findUPar(i*n + j)]);
                }
            }
        }
        vector<pair<int, int>> xy{{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (!grid[i][j])
                {
                    int res = 1;
                    unordered_set<int> ulpar;
                    for (int k = 0; k < 4; k++)
                    {
                        int x = i + xy[k].first;
                        int y = j + xy[k].second;
                        if (x >= 0 && x < n && y >= 0 && y < n && grid[x][y])
                        ulpar.insert(dsu.findUPar(x*n + y));
                    }
                    for (auto it = ulpar.begin(); it != ulpar.end(); it++)
                    res += dsu.size[*it];
                    ans = max(ans, res);
                }
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin >> t;
    while(t--){

        int n;
        cin>>n;
        vector<vector<int>>grid(n,vector<int>(n));
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                cin>>grid[i][j];
        Solution ob;
        cout<<ob.largestIsland(grid)<<endl;
    }
    return 0;
}

// } Driver Code Ends