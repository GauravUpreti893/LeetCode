//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
    public:
    int dfs(vector<vector<int>> &adj, int par, int gp)
    {
        if (adj[par].size() == 1)
        return 1;
        int ans = 0;
        for (auto child : adj[par])
        {
            if (child != gp)
            {
                ans += dfs(adj, child, par);
            }
        }
        return ans;
    }
    int solve(int N, vector<int>& p){
        // code here
        if (N == 1)
        return 0;
        vector<vector<int>> adj(N);
        for (int i = 1; i < N; i++)
        {
            adj[i].push_back(p[i]);
            adj[p[i]].push_back(i);
        }
        int par = -1, mx = 0;
        for (int i = 0; i < N; i++)
        {
            if (adj[i].size() > mx)
            {
                mx = adj[i].size();
                par = i;
            }
        }
        int res = dfs(adj, par, -1);
        return N - res - 1;
    }
};


//{ Driver Code Starts.

int main(){
    int T;
    cin >> T;
    while(T--){
        int N;
        cin >> N;
        vector<int> p(N);
        for(int i = 0; i < N; i++){
            cin >> p[i];
        }

        Solution obj;
        cout << obj.solve(N, p) << "\n";
    }
}   
// } Driver Code Ends