//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    long long solve(int N, int K, vector<long long>& GeekNum) {
        // code here
        if (N <= K)
        return GeekNum[N - 1];
        vector<long long> dp(N + 1);
        long long sum = 0;
        for (int i = 0; i < K; i++)
        {
            dp[i + 1] = GeekNum[i];
            sum += GeekNum[i];
        }
        for (int i = K + 1; i <= N; i++)
        {
            dp[i] = sum;
            sum += sum - dp[i - K];
        }
        return dp[N];
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