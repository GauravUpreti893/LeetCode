//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int knapSack(int n, int W, int val[], int wt[])
    {
        // code here
        vector<vector<int>> dp(n + 1, vector<int> (W + 1, 0));
        for (int idx = n - 1; idx >= 0; idx--)
        {
            for (int w = 1; w <= W; w++)
            dp[idx][w] = max(dp[idx + 1][w], ((w - wt[idx] >= 0) ? val[idx] + dp[idx][w - wt[idx]] : 0));
        }
        return dp[0][W];
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