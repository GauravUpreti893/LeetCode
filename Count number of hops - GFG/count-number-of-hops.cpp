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
        vector<long long> dp(4, 0);
        dp[n%4] = 1;
        long long mod = 1e9 + 7;
        for (int idx = n - 1; idx >= 0; idx--)
        {
            dp[idx%4] = (dp[(idx + 1)%4] + dp[(idx + 2)%4] + dp[(idx + 3)%4]) % mod;
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