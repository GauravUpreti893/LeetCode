//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    int nthFibonacci(int n){
        // code here
        vector<int> dp(3, 1);
        int prev
        int mod = 1e9 + 7;
        for (int i = 3; i <= n; i++)
        {
            dp[i%3] = (dp[(i - 1) % 3] + dp[(i - 2) % 3]) % mod;
        }
        return dp[n%3];
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