//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
  int nofways(int n, vector<int> &dp)
  {
      if (dp[n] != -1)
      return dp[n];
      int mod = 1e8;
      return dp[n] = (nofways(n - 1, dp) + nofways(n - 2, dp)) % mod;
  }
    int fillingBucket(int N) {
        // code here
        vector<int> dp(N + 1, -1);
        dp[1] = 1;
        dp[2] = 2;
        return nofways(N, dp);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;

        Solution ob;
        cout << ob.fillingBucket(N) << endl;
    }
    return 0;
}
// } Driver Code Ends