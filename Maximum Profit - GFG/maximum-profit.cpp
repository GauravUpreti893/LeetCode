//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int maxProfit(int K, int n, int prices[]) {
        // code here
        vector<vector<vector<int>>> dp(2, vector<vector<int>> (K + 1, vector<int>(2, 0)));
        for (int idx = n - 1; idx >= 0; idx--)
        {
            for (int k = 1; k <= K; k++)
            {
                    dp[idx % 2][k][1] = max(dp[!(idx % 2)][k - 1][0] + prices[idx], dp[!(idx % 2)][k][1]);
                    dp[idx % 2][k][0] = max(dp[!(idx % 2)][k][1] - prices[idx], dp[!(idx % 2)][k][0]);
            }
        }
        return dp[0][K][0];
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, K;
        cin >> K;
        cin >> N;
        int A[N];
        for (int i = 0; i < N; i++) cin >> A[i];

        Solution ob;
        cout << ob.maxProfit(K, N, A) << endl;
    }
    return 0;
}
// } Driver Code Ends