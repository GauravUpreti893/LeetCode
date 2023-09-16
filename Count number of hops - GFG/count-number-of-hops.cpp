//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to count the number of ways in which frog can reach the top.
    long long countWays(int n)
    {
        
        // your code here
        vector<long long> dp(n + 3, 0);
        dp[n] = 1;
        long long mod = 1e9 + 7;
        for (int idx = n - 1; idx >= 0; idx--)
        {
            dp[idx] = (dp[idx + 1] + dp[idx + 2] + dp[idx + 3]) % mod;
        }
        return dp[0];
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