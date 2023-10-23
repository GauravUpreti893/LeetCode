//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
public:
    int maxsum(int arr[], vector<int> &dp, int idx)
    {
        int n = dp.size();
        if (idx == n)
        return 0;
        if (dp[idx] != -1)
        return dp[idx];
        int ans = arr[idx];
        maxsum(arr, dp, idx + 1);
        for (int i = idx + 1; i < n; i++)
        {
            if (arr[idx] < arr[i])
            {
                ans = max(ans, arr[idx] + maxsum(arr, dp, i));
            }
        }
        return dp[idx] = ans;
    }
	int maxSumIS(int arr[], int n)  
	{  
	    // Your code goes here
	    vector<int> dp(n, -1);
	    maxsum(arr, dp, 0);
	    int ans = 0;
	    for (int i = 0; i < n; i++)
	    ans = max(ans, dp[i]);
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