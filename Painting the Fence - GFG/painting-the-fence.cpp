//{ Driver Code Starts
#include <bits/stdc++.h>
#include<stdio.h>
#include<math.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    long long countWays(int n, int k){
        // code here
        vector<pair<long long, long long>> dp(2);
        dp[1] = {k, k};
        long long mod = 1e9 + 7;
        for (int i = 2; i <= n; i++)
        {
            pair<long long, long long> p = dp[!(i%2)];
            pair<long long, long long> ans;
            ans.first = (p.second * (k - 1)) % mod;
            ans.second = (p.first + ans.first) % mod;
            dp[i%2] = ans;
        }
        return dp[n%2].second;
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