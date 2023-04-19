//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int maximum(int val[], int wt[], int i, int w, vector<vector<int>> &dp)
    {
        if (w < 0)
        return -100;
        int n = dp.size();
        if (w == 0 || i == n)
        return 0;
        if (dp[i][w] != -1)
        return dp[i][w];
        return dp[i][w] = max(maximum(val, wt, i, w - wt[i], dp) + val[i], maximum(val, wt, i + 1, w, dp));
    }
    int knapSack(int n, int W, int val[], int wt[])
    {
        // code here
        vector<vector<int>> dp(n, vector<int> (W + 1, -1));
        return maximum(val, wt, 0, W, dp);
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