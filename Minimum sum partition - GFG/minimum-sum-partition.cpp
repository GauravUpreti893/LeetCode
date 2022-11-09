//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{

  public:
  int minimum(int* arr, int n, long long sum, long long x, vector<vector<int>> &dp)
  {
      if (n < 0)
      return 1e9;
      if (dp[n][x] != -1)
      return dp[n][x];
      int res = abs(2*x - sum);
      res = min(res, min(minimum(arr, n - 1, sum, x - arr[n], dp), minimum(arr, n -1, sum, x, dp)));
      return dp[n][x] = res;
  }
	int minDifference(int arr[], int n)  { 
	    // Your code goes here
	    long long sum = 0;
	    for (int i = 0; i < n; i++)
	    sum += arr[i];
	    vector<vector<int>> dp(n, vector<int> (sum + 1, -1));
	    return minimum(arr, n - 1, sum, sum, dp);
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