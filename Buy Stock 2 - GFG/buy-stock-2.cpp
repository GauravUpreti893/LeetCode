//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    long long maximumProfit(vector<long long>&prices, int n) {
        // Code here
        vector<vector<long long>> dp(2, vector<long long> (2, 0));
        for (int idx = n - 1; idx >= 0; idx--)
        {
            dp[idx%2][1] = max(dp[!(idx % 2)][0] + prices[idx], dp[!(idx % 2)][1]);
            dp[idx%2][0] = max(dp[!(idx % 2)][1] - prices[idx], dp[!(idx % 2)][0]);
        }
        return dp[0][0];
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n; cin>>n;
        vector<long long> prices;
        
        for(int i=0; i<n; ++i){
            long long x; cin>>x;
            prices.push_back(x);
        }
        
        Solution obj;
        cout<<obj.maximumProfit(prices, n)<<"\n";
    }
    return 0;
}
// } Driver Code Ends