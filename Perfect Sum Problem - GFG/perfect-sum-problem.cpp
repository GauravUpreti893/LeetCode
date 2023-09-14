//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{

	public:
	int count(int arr[], vector<vector<int>> &dp, int idx, int sum)
	{
	    int n = dp.size(), mod = 1e9 + 7;
	   // if (idx == n - 1 && !sum && !arr[idx])
	   // return 1;
	    if (idx == n || sum < 0)
	    return (sum == 0);
	    if (dp[idx][sum] != -1)
	    return dp[idx][sum];
	    return dp[idx][sum] = (count(arr, dp, idx + 1, sum) + count(arr, dp, idx + 1, sum - arr[idx]) + (idx != n - 1 && !sum && !arr[idx]))%mod;
	}
	int perfectSum(int arr[], int n, int sum)
	{
        // Your code goes here
        vector<vector<int>> dp(n, vector<int> (sum + 1, -1));
        return count(arr, dp, 0, sum);
	}
	  
};

//{ Driver Code Starts.
int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n, sum;

        cin >> n >> sum;

        int a[n];
        for(int i = 0; i < n; i++)
        	cin >> a[i];

       

	    Solution ob;
	    cout << ob.perfectSum(a, n, sum) << "\n";
	     
    }
    return 0;
}

// } Driver Code Ends