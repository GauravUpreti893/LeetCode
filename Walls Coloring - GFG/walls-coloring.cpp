//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{   
public:
    int cost(vector<vector<int>> &colors, vector<vector<int>> &dp, int idx, int col)
    {
        int n = colors.size();
        if (idx == n)
        return 0;
        if (col != -1 && dp[idx][col] != -1)
        return dp[idx][col];
        int ans = 1e9;
        if (col != 0)
        {
            ans = min(ans, colors[idx][0] + cost(colors, dp, idx + 1, 0));
        }
        if (col != 1)
        {
            ans = min(ans, colors[idx][1] + cost(colors, dp, idx + 1, 1));
        }
        if (col != 2)
        {
            ans = min(ans, colors[idx][2] + cost(colors, dp, idx + 1, 2));
        }
        if (col == -1)
        return ans;
        return dp[idx][col] = ans;
    }
    int minCost(vector<vector<int>> &colors, int N) {
        // Write your code here.
        vector<vector<int>> dp(N, vector<int> (3, -1));
        return cost(colors, dp, 0, -1);
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {

        int n;
        cin >> n;
        vector<vector<int>> colors(n, vector<int>(3));
        for (int i = 0; i < n; i++)
            cin >> colors[i][0] >> colors[i][1] >> colors[i][2];
            
        Solution ob;
        cout << ob.minCost(colors, n) << endl;    
    }
}
// } Driver Code Ends