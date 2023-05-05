//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    int longest(string &s1, string &s2, int i, int j, vector<vector<int>> &dp)
    {
        int n = s1.size(), m = s2.size();
        if (i == n || j == m)
        return 0;
        if (dp[i][j] != -1)
        return dp[i][j];
        if (s1[i] == s2[j])
        {
            dp[i][j] = 1 + longest(s1, s2, i + 1, j + 1, dp);
        }
        else
        dp[i][j] = 0;
        longest(s1, s2, i + 1, j, dp);
        longest(s1, s2, i, j + 1, dp);
        return dp[i][j];
    }
    int longestCommonSubstr (string S1, string S2, int n, int m)
    {
        // your code here
        vector<vector<int>> dp(n, vector<int> (m, -1));
        longest(S1, S2, 0, 0, dp);
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                ans = max(ans, dp[i][j]);
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n, m; cin >> n >> m;
        string s1, s2;
        cin >> s1 >> s2;
        Solution ob;

        cout << ob.longestCommonSubstr (s1, s2, n, m) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends