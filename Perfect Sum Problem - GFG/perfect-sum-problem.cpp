//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{

	public:
	int fun(int arr[], int idx, int sum, vector<vector<int>> &dp)
	{
	    
	    int n = dp.size();
	    if (sum < 0)
	    return 0;
	    if (idx == n)
	    {
	        if (sum != 0)
	        return 0;
	        return 1;
	    }
	    if (dp[idx][sum] != -1)
	    return dp[idx][sum];
	    int mod = 1e9 + 7;
	    return dp[idx][sum] = (fun(arr, idx + 1, sum - arr[idx], dp) + fun(arr, idx + 1, sum, dp)) % mod;
	}
	int perfectSum(int arr[], int n, int sum)
	{
        // Your code goes here
        vector<vector<int>> dp(n, vector<int> (sum + 1, -1));
        return fun(arr, 0, sum, dp);
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