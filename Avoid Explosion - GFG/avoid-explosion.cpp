//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class DisjointSet
{
public:
    vector<int> parent, size, rank;
    DisjointSet(int n)
    {
        parent = vector<int> (n + 1);
        for (int i = 0; i <= n; i++)
        parent[i] = i;
        size = vector<int> (n + 1, 1);
        rank = vector<int> (n + 1, 0);
    }    
    int findUPar(int u)
    {
        if (parent[u] == u)
        return u;
        return parent[u] = findUPar(parent[u]);
    }
    int checkUPar(int u)
    {
        if (parent[u] == u)
        return u;
        return checkUPar(parent[u]);
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
    bool unionByRank(int u, int v)
    {
        int up_u = findUPar(u);
        int up_v = findUPar(v);
        if (up_u == up_v)
        return false;
        else if (rank[up_u] == rank[up_v])
        {
            parent[up_v] = up_u;
            rank[up_u]++;
        }
        else if (rank[up_u] > rank[up_v])
        {
            parent[up_v] = up_u;
        }
        else
        {
            parent[up_u] = up_v;
        }
        return true;
    }
};
class Solution {
  public:
    vector<string> avoidExplosion(vector<vector<int>>& mix, int n, vector<vector<int>>& danger, int m) {
        vector<string> ans(n);
        DisjointSet obj(n);
        for (int i = 0; i < n; i++)
        {
            int p_u = obj.findUPar(mix[i][0]);
            int p_v = obj.findUPar(mix[i][1]);
            bool flag = true;
            for (int j = 0; j < m; j++)
            {
                int x = obj.checkUPar(danger[j][0]);
                int y = obj.checkUPar(danger[j][1]);
                if ((x == p_u && y == p_v) || (x == p_v && y == p_u))
                {
                    flag = false;
                    break;
                }
            }
            if (flag)
            {
                ans[i] = "Yes";
                obj.unionBySize(mix[i][0], mix[i][1]);
            }
            else
            ans[i] = "No";
        }
         return ans;                             
                                      
                                      
                                      
                                      
                                  }
};

//{ Driver Code Starts.

int main() {
    int tt;
    cin >> tt;
    Solution sol;
    while (tt--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> mix(n, vector<int>(2));
        vector<vector<int>> danger(m, vector<int>(2));
        for (int i = 0; i < n; i++) {
            cin >> mix[i][0] >> mix[i][1];
        }

        for (int i = 0; i < m; i++) {
            cin >> danger[i][0] >> danger[i][1];
        }

        auto ans = sol.avoidExplosion(mix, n, danger, m);
        for (auto &val : ans) cout << val << " ";
        cout << "\n";
    }

    return 0;
}

// } Driver Code Ends