//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution{
  public:
    int cut(int price[], vector<vector<int>> &dp, int len, int idx)
    {
        if (len < 0)
        return -1e5;
        int n = dp.size() - 1;
        if (len == 0 || idx == n)
        return 0;
        if (dp[len][idx] != -1)
        return dp[len][idx];
        dp[len][idx] = max(cut(price, dp, len - idx - 1, idx) + price[idx], cut(price, dp, len, idx + 1));
    }
    int cutRod(int price[], int n) {
        //code here
        vector<vector<int>> dp(n + 1, vector<int> (n, -1));
        return cut(price, dp, n, 0);
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) 
            cin >> a[i];
            
        Solution ob;

        cout << ob.cutRod(a, n) << endl;
    }
    return 0;
}
// } Driver Code Ends