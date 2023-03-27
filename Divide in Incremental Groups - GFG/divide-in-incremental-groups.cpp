//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int divide(int idx, int sum, int prev, vector<vector<vector<int>>> &dp)
    {
        int n = dp.size();
        int ans = 0;
        if (idx == n)
        {
            if (sum == 0)
            {
                // cout<<idx<<" "<<sum<<" "<<prev<<endl;
                return 1;
            }
            return 0;
        }
        if (dp[idx][sum][prev] != -1)
        return dp[idx][sum][prev];
        for (int i = prev; i <= sum; i++)
        {
            ans += divide(idx + 1, sum - i, i, dp);
        }
        return dp[idx][sum][prev] = ans;
    }
    int countWaystoDivide(int N, int K) {
        // Code here
        vector<vector<vector<int>>> dp(K, vector<vector<int>> (N + 1, vector<int> (N + 1, -1)));
        return divide(0, N, 1, dp);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, K;
        cin >> N >> K;
        Solution ob;
        cout << ob.countWaystoDivide(N, K) << endl;
    }
}
// } Driver Code Ends