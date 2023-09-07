//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    //Function to find the nth catalan number.
    // (A)B, A is combination of brackets inside and B is combination outside
    int findCatalan(int N) 
    {
        //code here
        vector<long long> dp(N + 1, -1);
        dp[0] = 1;
        long long mod = 1e9 + 7;
        for (int n = 1; n <= N; n++)
        {
            long long ans = 0;
            for (int i = 0; i < n; i++)
            {
                ans += (dp[i] * dp[n - 1 - i]) % mod;
                ans %= mod;
            }
            dp[n] = ans;
        }
        return dp[N];
    }
};

//{ Driver Code Starts.
int main() 
{
	int t;
	cin>>t;
	while(t--) {
	    
	    int n;
	    cin>>n;
	    Solution obj;
	    cout<< obj.findCatalan(n) <<"\n";    
	}
	return 0;
}
// } Driver Code Ends