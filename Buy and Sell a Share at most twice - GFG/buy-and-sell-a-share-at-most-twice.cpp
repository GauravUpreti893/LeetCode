//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

int maxProfit(vector<int>&prices){
    //Write your code here..
    int n = prices.size();
    vector<vector<vector<int>>> dp(2, vector<vector<int>> (3, vector<int>(2, 0)));
    for (int idx = n - 1; idx >= 0; idx--)
    {
        for (int k = 1; k <= 2; k++)
        {
                dp[idx % 2][k][1] = max(dp[!(idx % 2)][k - 1][0] + prices[idx], dp[!(idx % 2)][k][1]);
                dp[idx % 2][k][0] = max(dp[!(idx % 2)][k][1] - prices[idx], dp[!(idx % 2)][k][0]);
        }
    }
    return dp[0][2][0];
}

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        
        int n;
        cin>>n;
        vector<int> price(n);
        for(int i=0;i<n;i++) cin>>price[i];
        cout<<maxProfit(price)<<endl;
    }

}

// } Driver Code Ends