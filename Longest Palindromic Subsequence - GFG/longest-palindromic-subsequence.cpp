//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
  public:
    int longestPalinSubseq(string a) {
        //code here
        string b = a;
        reverse(b.begin(), b.end());
        int n = a.size();
        vector<vector<int>> dp(2, vector<int> (n + 1, 0));
        for (int i = n - 1; i >= 0; i--)
        {
            for (int j = n - 1; j >= 0; j--)
            {
                if (a[i] == b[j])
                dp[i%2][j] = 1 + dp[!(i%2)][j + 1];
                else
                dp[i%2][j] = max(dp[!(i%2)][j], dp[i%2][j + 1]);
            }
        }
        return dp[0][0];
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