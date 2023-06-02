//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

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
vector<int> prime;
class Solution{
public:
    void precompute(){
        long long n = 1.3e6;
        vector<bool> check(n, 1);
        for (long long i = 2; i <= n; i++)
        {
            if (!check[i])
            continue;
            prime.push_back(i);
            for (long long j = i*i; j <= n; j += i)
            {
                check[j] = 0;
            }
        }
        return;
    }
    int helpSanta(int n, int m, vector<vector<int>> &g){
        // Code here
        DisjointSet dsu(n);
        if (!m)
        return -1;
        for (int i = 0; i < n; i++)
        {
            for (auto j : g[i])
            dsu.unionBySize(i, j);
        }
        int mx = 0;
        for (int i = 1; i <= n; i++)
        {
            mx = max(mx, dsu.size[dsu.findUPar(i)]);    
        }
        mx--;
        int k = prime.size();
        if (mx >= k)
        return -1;
        return prime[mx];
    }
};

//{ Driver Code Starts.

int main(){
	int t;cin>>t;
	Solution ob;
	ob.precompute();
	while(t--){
        int n,e,u,v;
        cin>>n>>e;
        vector<vector<int>> g(n+10);
        
		for(int i = 0; i < e; i++)
		{
			cin>>u>>v;
			g[u].push_back(v);
			g[v].push_back(u);
		}
		cout << ob.helpSanta(n, e, g) << endl;
		
	}
}



// } Driver Code Ends