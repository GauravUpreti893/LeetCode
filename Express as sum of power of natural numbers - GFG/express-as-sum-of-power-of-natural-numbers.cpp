//{ Driver Code Starts
// Initial Template for C++


#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution{
    public:
    long long power(long long a, long long b)
    {
        long long x = 1;
        while (b)
        {
            if (b & 1)
                x *= a;
            a *= a;
            b >>= 1;
        }
        return x;
    }
    int numOfWays(int n, int x)
    {
        // code here
        double res = pow(n, 1.0/x);
        int size = ceil(res);
        vector<vector<int>> dp(2, vector<int> (n + 1, 0));
        int mod = 1e9 + 7;
        dp[0][0] = 1;
        dp[1][0] = 1;
        for (int i = size; i > 0; i--)
        {
            for (long long j = 1; j <= n; j++)
            {
                dp[i%2][j] = dp[!(i%2)][j];
                long long res = j - power(i, x);
                if ( res >= 0)
                dp[i%2][j] = (dp[i%2][j] + dp[!(i%2)][res]) % mod;
            }
        }
        return dp[1][n];
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int  n, x;
        cin >> n >> x;
        Solution ob;
        cout<<ob.numOfWays(n, x)<<endl;
    }
    return 0;
}

// } Driver Code Ends