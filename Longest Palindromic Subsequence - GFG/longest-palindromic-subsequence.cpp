//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
  public:
    int longest(string &a, string &b, vector<vector<int>> &dp, int i, int j)
    {
        int n = a.size();
        if (i == n || j == n)
        return 0;
        if (dp[i][j] != -1)
        return dp[i][j];
        if (a[i] == b[j])
        dp[i][j] = 1 + longest(a, b, dp, i + 1, j + 1);
        else
        dp[i][j] = max(longest(a, b, dp, i + 1, j), longest(a, b, dp, i, j + 1));
        return dp[i][j];
    }
    int longestPalinSubseq(string A) {
        //code here
        string B = A;
        reverse(B.begin(), B.end());
        int n = A.size();
        vector<vector<int>> dp(n, vector<int> (n, -1));
        return longest(A, B, dp, 0, 0);
    }
};

//{ Driver Code Starts.

int32_t main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        cout << ob.longestPalinSubseq(s) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends