//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to count the number of ways in which frog can reach the top.
    long long count(int idx, vector<long long> &dp)
    {
       long long ans = 0, mod = 1e9 + 7, n = dp.size();
       if (idx >= n)
       return idx == n;
       if (dp[idx] != -1)
       return dp[idx];
       return dp[idx] = (count(idx + 1, dp) + count(idx + 2, dp) + count(idx + 3, dp))%mod;
    }
    long long countWays(int n)
    {
        
        // your code here
        vector<long long> dp(n, -1);
        return count(0, dp);
        
    }
};


//{ Driver Code Starts.
int main()
{
    //taking testcases
	int t;
	cin >> t;
	
	while(t--)
	{
	    //taking number of steps in stair
		int n;
		cin>>n;
		Solution ob;
		//calling function countWays()
		cout << ob.countWays(n) << endl;
	}
    
    return 0;
    
}

// } Driver Code Ends