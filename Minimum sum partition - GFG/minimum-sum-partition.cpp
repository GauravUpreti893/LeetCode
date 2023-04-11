//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{

  public:
	int minDifference(int arr[], int n)  { 
	    // Your code goes here
	    int sum = 0;
	    for (int i = 0; i < n; i++)
	    sum += arr[i];
	    int s = sum/2;
	    vector<vector<bool>> dp(n + 1, vector<bool> (s + 1));
	    for (int i = 1; i <= s; i++)
	    {
	        dp[0][i] = 0;
	    }
	    for (int i = 0; i <= n; i++)
	    {
	        dp[i][0] = 1;
	    }
	    for (int i = 1; i <= n; i++)
	    {
	        for (int j = 1; j <= s; j++)
	        {
	            dp[i][j] = dp[i - 1][j];
	            if (j - arr[i - 1] >= 0)
                dp[i][j] = dp[i][j] | dp[i - 1][j - arr[i - 1]];
	        }
	    }
	    int ans = 1e6;
	    for (int i = 0; i <= s; i++)
	    {
	        if (dp[n][i])
	        ans = min(ans, abs(sum - 2*i));
	    }
	    return ans;
	} 
};


//{ Driver Code Starts.
int main() 
{
   
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int a[n];
        for(int i = 0; i < n; i++)
        	cin >> a[i];

       

	    Solution ob;
	    cout << ob.minDifference(a, n) << "\n";
	     
    }
    return 0;
}
// } Driver Code Ends