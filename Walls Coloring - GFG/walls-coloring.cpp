//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{   
public:
    int minCost(vector<vector<int>> &colors, int N) {
        // Write your code here.
        vector<vector<int>> dp(2, vector<int> (3));
        dp[0][0] = min(colors[0][1], colors[0][2]);
        dp[0][1] = min(colors[0][0], colors[0][2]);
        dp[0][2] = min(colors[0][0], colors[0][1]);
        for (int i = 1; i < N; i++)
        {
            dp[i%2][0] = min(dp[!(i%2)][1] + colors[i][1], dp[!(i%2)][2] + colors[i][2]);
            dp[i%2][1] = min(dp[!(i%2)][0] + colors[i][0], dp[!(i%2)][2] + colors[i][2]);
            dp[i%2][2] = min(dp[!(i%2)][1] + colors[i][1], dp[!(i%2)][0] + colors[i][0]);
        }
        return min({dp[(N - 1)%2][0], dp[(N - 1)%2][1], dp[(N - 1)%2][2]});
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