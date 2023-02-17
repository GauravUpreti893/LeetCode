//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    long long fun(int N, int K, vector<long long> &dp)
    {
        if (dp[N] != -1)
        return dp[N];
        long long ans = 0;
        for (int i = 1; i <= K; i++)
        {
            ans += fun(N - i, K, dp);
        }
        return dp[N] = ans;
    }
    long long solve(int N, int K, vector<long long>& GeekNum) {
        // code here
        if (N <= K)
        return GeekNum[N - 1];
        vector<long long> dp(N + 1, -1);
        for (int i = 0; i < K; i++)
        {
            dp[i + 1] = GeekNum[i];
        }
        return fun(N, K, dp);
    }
};


//{ Driver Code Starts.

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, K;
        cin >> N >> K;

        vector<long long> GeekNum(K);

        for (int i = 0; i < K; i++) cin >> GeekNum[i];

        Solution ob;
        cout << ob.solve(N, K, GeekNum) << "\n";
    }
    return 0;
}

// } Driver Code Ends