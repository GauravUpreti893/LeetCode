//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int minCost(vector<vector<int>> &costs) {
        // write your code here
        int n = costs.size();
        if (!n)
        return 0;
        int k = costs[0].size();
        if (!k)
        {
            return -1;
        }
        if (k == 1)
        {
            if (n == 1)
            return costs[0][0];
            else
            return -1;
        }
        vector<vector<int>> dp(2, vector<int> (k, 0));
        for (int i = 0; i < k; i++)
        {
            dp[0][i] = costs[0][i];
        }
        for (int i = 1; i < n; i++)
        {
            int mn = 1e8, freq = 0;
            for (int j = 0; j < k; j++)
            {
                if (dp[!(i%2)][j] < mn)
                {
                    mn = dp[!(i%2)][j];
                    freq = 1;
                }
                else if (dp[!(i%2)][j] == mn)
                {
                    freq++;
                }
            }
            int second = 1e8;
            if (freq == 1)
            {
                for (int j = 0; j < k; j++)
                {
                    if (dp[!(i%2)][j] != mn)
                    second = min(second, dp[!(i%2)][j]);
                }
            }
            for (int j = 0; j < k; j++)
            {
                if (dp[!(i%2)][j] == mn && freq == 1)
                {
                    dp[i%2][j] = second + costs[i][j];
                }
                else
                dp[i%2][j] = mn + costs[i][j];
            }
        }
        int ans = INT_MAX;
        for (int i = 0; i < k; i++)
        {
            ans = min(ans, dp[(n - 1)%2][i]);
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<vector<int>> costs(n, vector<int>(k));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < k; j++) cin >> costs[i][j];
        }
        Solution obj;
        cout << obj.minCost(costs) << endl;
    }
}
// } Driver Code Ends