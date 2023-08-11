//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    long long int count(int coins[], int N, int S) {

        // code here.
        vector<vector<long long>> dp(N + 1, vector<long long> (S + 1, 0));
        // dp[0][0] = 1;
        for (int idx = 1; idx <= N; idx++)
        {
            dp[idx][0] = 1;
            for (int sum = 1; sum <= S; sum++)
            {
                dp[idx][sum] = ((sum - coins[idx - 1] >= 0) ? dp[idx][sum - coins[idx - 1]] : 0) + dp[idx - 1][sum]; 
            }
        }
        return dp[N][S];
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int sum, N;
        cin >> sum >> N;
        int coins[N];
        for (int i = 0; i < N; i++) cin >> coins[i];
        Solution ob;
        cout << ob.count(coins, N, sum) << endl;
    }

    return 0;
}


// } Driver Code Ends