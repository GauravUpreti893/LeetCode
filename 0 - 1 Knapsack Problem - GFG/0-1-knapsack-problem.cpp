// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to return max value that can be put in knapsack of capacity W.
    int knap(int w,int* &wt, int* &val, int n, vector<vector<int>> &profit)
    {
        if (w < 0)
        return INT_MIN/2;
        if (profit[n][w] == -1)
        {
            profit[n][w] = max(knap(w - wt[n - 1],wt,val,n - 1,profit) + val[n - 1],knap(w,wt,val,n -1,profit));
        }
        return profit[n][w];
    }
    int knapSack(int W, int wt[], int val[], int n) 
    { 
       // Your code here
       vector<vector<int>> profit(n + 1,vector<int> (W + 1,-1));
       for (int i = 0; i <= W; i++)
       {
           profit[0][i] = 0;
       }
       for (int i = 0; i <= n; i++)
       {
           profit[i][0] = 0;
       }
       return knap(W,wt,val,n,profit);
    }
};

// { Driver Code Starts.

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
}  // } Driver Code Ends