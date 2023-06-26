//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
int mod = 1e9 + 7;
vector<vector<int>> dp;
bool flag = true;
class Solution{
public:
    Solution()
    {
        flag = true;
    }
    int nCr(int n, int r){
        // code here
        if (flag)
        {
            flag = false;
            dp = vector<vector<int>>(n + 1, vector<int> (r + 1, -1));
        }
        if (n <= 0 || n < r)
        return 0;
        if (n == r || r == 0)
        return 1;
        if (dp[n][r] != -1)
        return dp[n][r];
       return dp[n][r] = (nCr(n - 1, r) + nCr(n - 1, r - 1)) % mod;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, r;
        cin>>n>>r;
        
        Solution ob;
        cout<<ob.nCr(n, r)<<endl;
    }
    return 0;
}
// } Driver Code Ends