//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
 

// } Driver Code Ends
long long  numberOfPaths(int m, int n)
{
    // Code Here
    vector<vector<int>> dp(2, vector<int> (n + 1));
    for (int i = 0; i < n; i++)
    dp[0][i] = 0;
    dp[0][1] = 1;
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            dp[i%2][j] = dp[!(i%2)][j] + dp[i%2][j - 1];
        }
    }
    return dp[m%2][n];
}

//{ Driver Code Starts.

 
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m;
		cin>>m>>n;
	    cout << numberOfPaths(m, n)<<endl;
	}
    return 0;
}
// } Driver Code Ends