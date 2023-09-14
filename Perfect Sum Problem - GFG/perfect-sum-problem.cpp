//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{

	public:
	int perfectSum(int arr[], int n, int S)
	{
        // Your code goes here
        vector<vector<int>> dp(n + 1, vector<int> (S + 1, 0));
        int mod = 1e9 + 7;
        for (int idx = n - 1; idx >= 0; idx--)
        {
            for (int sum = 0; sum <= S; sum++)
            {
                dp[idx][sum] = (dp[idx + 1][sum] + ((sum - arr[idx] >= 0)? dp[idx + 1][sum - arr[idx]] : 0) + (sum == arr[idx])) % mod;
            }
        }
        return dp[0][S];
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