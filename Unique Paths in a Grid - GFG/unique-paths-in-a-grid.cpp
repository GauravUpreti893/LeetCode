//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    long long paths(vector<vector<int>> &grid, vector<vector<int>> &dp, int i, int j)
    {
        long long mod = 1e9 + 7;
        int n = grid.size(), m = grid[0].size();
        if (i == n || j == m || !grid[i][j])
        return 0;
        if (dp[i][j] != -1)
        return dp[i][j];
        return dp[i][j] = (paths(grid, dp, i + 1, j) + paths(grid, dp, i, j + 1)) % mod;
    }
    int uniquePaths(int n, int m, vector<vector<int>> &grid) {
        // code here
        vector<vector<int>> dp(n, vector<int> (m, -1));
        dp[n - 1][m - 1] = 1;
        return paths(grid, dp, 0, 0);
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,m,x;
        cin>>n>>m;
        
        vector<vector<int>> grid(n,vector<int>(m));
        
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cin>>grid[i][j];
            }
        }

        Solution ob;
        cout << ob.uniquePaths(n,m,grid) << endl;
    }
    return 0;
}
// } Driver Code Ends