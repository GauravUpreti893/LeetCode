//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//Back-end complete function Template for C++

class Solution {
  public:
    int findTargetSumWays(vector<int>&arr ,int d) {
        //Your code here
        int sum = 0;
        int n = arr.size();
        for (int i = 0; i < n; i++)
        {
            sum += arr[i];
        }
        if ((sum + d) % 2)
        return 0;
        int x = (sum + d)/2;
        if (x < 0)
            return 0;
        vector<vector<int>> dp(2, vector<int> (x + 1, 0));
        dp[0][0] = 1;
        dp[1][0] = 1;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 0; j <= x; j++)
            {
                dp[i%2][j] = dp[!(i%2)][j];
                if (j - arr[i - 1] >= 0)
                {
                    dp[i%2][j] += dp[!(i%2)][j - arr[i - 1]];
                }
            }
        }
        return dp[n%2][x];
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;
        vector<int>arr(N);
        
        for(int i=0 ; i<N ; i++){
            cin>>arr[i];
        }
        int target;
        cin >> target;

        Solution ob;
        cout<<ob.findTargetSumWays(arr,target);
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends