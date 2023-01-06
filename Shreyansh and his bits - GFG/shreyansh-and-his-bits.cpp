//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    vector<vector<long long>> dp;
    Solution()
    {
        dp = vector<vector<long long>> (40, (vector<long long> (40, -1)));
    }
    long long ncr(long long n, long long r)
    {
        if (n < 0 || n < r)
        return 0;
        if (n == r || !r)
        return 1;
        if (dp[n][r] != -1)
        return dp[n][r];
        return dp[n][r] = ncr(n - 1, r) + ncr(n - 1, r - 1);
    }
    long long count(long long x) {
        // Code Here
        int n = 0, one = 0;
        long long ans = 0;
        while (x)
        {
            if (x & 1)
            {
                one++;
                ans += ncr(n, one);
            }
            n++;
            x >>= 1;
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    
	int t;
	cin >> t;
	while (t-- > 0) {
	    long long x; cin >> x;
	    Solution ob;
	    cout << ob.count(x) << '\n';
	}
	return 0;
}
// } Driver Code Ends