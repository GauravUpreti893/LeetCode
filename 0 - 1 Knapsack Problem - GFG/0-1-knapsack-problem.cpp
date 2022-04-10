// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to return max value that can be put in knapsack of capacity W.
    int knapSack(int W, int wt[], int val[], int n) 
    { 
       // Your code here
       vector<vector<int>> profit(n + 1, vector<int> (W + 1));
       for (int i = 0; i <= W; i++)
       profit[0][i] = 0;
       for (int i = 0; i <= n; i++)
       {
           profit[i][0] = 0;
       }
       int diff,p1;
       for (int i = 1; i <= n; i++)
       {
           for (int j = 1; j <= W; j++)
           {
               diff = j - wt[i - 1];
               if (diff < 0)
               {
                   p1 = 0;
               }
               else
                p1 = profit[i - 1][diff] + val[i - 1];
               profit[i][j] = max(p1, profit[i - 1][j]);
           }
       }
       return profit[n][W];
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