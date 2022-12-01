//{ Driver Code Starts
//Initial Template for C++

#include <iostream>
using namespace std;


// } Driver Code Ends
//User function Template for C++
#include<vector>
vector<vector<long long>>dp(40, vector<long long>(40, -1));
class Solution{
public:
    
    long long ncr(int n, int r)
    {
        if (n == r || !r)
        return 1;
        if (n < r || n < 0)
        return 0;
        if (dp[n][r] != -1)
        return dp[n][r];
        return dp[n][r] = ncr(n - 1, r) + ncr(n - 1, r - 1);
    }
    long long count(long long x) {
        // Code Here
       for (int i = 0; i < 40; i++)
       {
           for (int j = 0; j < 40; j++)
           {
               dp[i][j] = -1;
           }
       }
       long long ans = 0;
       int n = 0, r = 0;
       while (x)
       {
           if (x&1)
           {
              r++; 
              ans += ncr(n, r);
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