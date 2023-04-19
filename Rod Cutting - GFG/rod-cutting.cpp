//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution{
  public:
    int cut (int price[], vector<vector<int>> &dp, int i, int j)
    {
        if (dp[i][j] != -1)
        return dp[i][j];
        int cost = 0;
        for (int k = i + 1; k <= j; k++)
        {
            cost = max(cost, cut(price, dp, k, j) + price[k - i - 1]);
        }
        return dp[i][j] = cost;
    }
    int cutRod(int price[], int n) {
        //code here
        vector<vector<int>> dp(n + 1, vector<int> (n + 1, -1));
        return cut(price, dp, 0, n);
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