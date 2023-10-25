//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int profit(int val[], int wt[], vector<vector<int>> &dp, int idx, int w)
    {
        int n = dp.size();
        if (idx == n)
        return 0;
        if (dp[idx][w] != -1)
        return dp[idx][w];
        return dp[idx][w] = max(profit(val, wt, dp, idx + 1, w), ((w - wt[idx] >= 0) ? val[idx] + profit(val, wt, dp, idx, w - wt[idx]) : 0));
    }
    int knapSack(int n, int W, int val[], int wt[])
    {
        // code here
        vector<vector<int>> dp(n, vector<int> (W + 1, -1));
        return profit(val, wt, dp, 0, W);
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N, W;
        cin>>N>>W;
        int val[N], wt[N];
        for(int i = 0;i < N;i++)
            cin>>val[i];
        for(int i = 0;i < N;i++)
            cin>>wt[i];
        
        Solution ob;
        cout<<ob.knapSack(N, W, val, wt)<<endl;
    }
    return 0;
}
// } Driver Code Ends