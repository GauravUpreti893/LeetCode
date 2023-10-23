//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
public:
	int maxSumIS(int arr[], int n)  
	{  
	    // Your code goes here
	    vector<int> dp(n + 1, 0);
	    int ans = 0;
	    for (int idx = n - 1; idx >= 0; idx--)
	    {
	        dp[idx] = arr[idx];
	        for (int i = idx + 1; i < n; i++)
            {
                if (arr[idx] < arr[i])
                dp[idx] = max(dp[idx], arr[idx] + dp[i]);
            }
            ans = max(ans, dp[idx]);
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
	    cout << ob.maxSumIS(a, n) << "\n";
	     
    }
    return 0;
}


// } Driver Code Ends