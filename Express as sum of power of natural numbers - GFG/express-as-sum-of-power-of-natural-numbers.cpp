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
    int ways(vector<vector<int>> &dp, int x, int no, long long n)
    {
        int size = dp.size();
        if (n == 0)
        return 1;
        if (no == size || n < 0)
        return 0;
        if (dp[no][n] != -1)
        return dp[no][n];
        int mod = 1e9 + 7;
        return dp[no][n] = (ways(dp, x, no + 1, n) + ways(dp, x, no + 1, n - power(no, x))) % mod;
    }
    int numOfWays(int n, int x)
    {
        // code here
        double res = pow(n, 1.0/x);
        int size = ceil(res);
        vector<vector<int>> dp(size + 1, vector<int> (n + 1, -1));
        return ways(dp, x, 1, n);
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