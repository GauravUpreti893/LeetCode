//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    int fibo(int n, vector<int> &dp)
    {
        if (n <= 2)
        return 1;
        if (dp[n] != -1)
        return dp[n];
        int mod = 1e9 + 7;
        dp[n] = (fibo(n - 1, dp) + fibo(n - 2, dp)) % mod;
    }
    int nthFibonacci(int n){
        // code here
        vector<int> dp(n + 1, -1);
        for (int i = 2)
        return fibo(n, dp);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.nthFibonacci(n) << endl;
    }
    return 0;
}

// } Driver Code Ends