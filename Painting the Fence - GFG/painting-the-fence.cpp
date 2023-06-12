//{ Driver Code Starts
#include <bits/stdc++.h>
#include<stdio.h>
#include<math.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    pair<long long, long long> count(vector<pair<long long, long long>> &dp, int n, long long k)
    {
        if (dp[n].first != -1)
        return dp[n];
        long long mod = 1e9 + 7;
        pair<long long, long long> p = count(dp, n - 1, k);
        pair<long long, long long> ans;
        ans.first = (p.second * (k - 1)) % mod;
        ans.second = (p.first + ans.first) % mod;
        return dp[n] = ans;
    }
    long long countWays(int n, int k){
        // code here
        vector<pair<long long, long long>> dp(n + 1, {-1, -1});
        dp[1] = {k, k};
        return count(dp, n, k).second;
    }
};

//{ Driver Code Starts.

int main()
{
	
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		Solution ob;
		cout<<ob.countWays(n,k)<<endl;
	}
	return 0;
}
// } Driver Code Ends