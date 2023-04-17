//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    int maximum(int wt[], int val[], int i, int w, vector<vector<int>> &dp)
    {
        if (w < 0)
        return -1e3;
        int n = dp.size();  
        if (w == 0 || i == n)
        return 0;
        if (dp[i][w] != -1)
        return dp[i][w];
        return dp[i][w] = max(maximum(wt, val, i + 1, w, dp), maximum(wt, val, i + 1, w - wt[i], dp) + val[i]);
    }
    //Function to return max value that can be put in knapsack of capacity W.
    int knapSack(int W, int wt[], int val[], int n) 
    { 
       // Your code here
       vector<vector<int>> dp(n, vector<int> (W + 1, -1));
       return maximum(wt, val, 0, W, dp);
    }
};

//{ Driver Code Starts.

int main()
 {
    //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //reading number of elements and weight
        int n, w;
        cin>>n>>w;
        
        int val[n];
        int wt[n];
        
        //inserting the values
        for(int i=0;i<n;i++)
            cin>>val[i];
        
        //inserting the weights
        for(int i=0;i<n;i++)
            cin>>wt[i];
        Solution ob;
        //calling method knapSack()
        cout<<ob.knapSack(w, wt, val, n)<<endl;
        
    }
	return 0;
}
// } Driver Code Ends