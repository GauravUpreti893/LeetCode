//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int equalPartition(int N, int nums[])
    {
        // code here
        int n = N;
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += nums[i];
        }
        if (sum % 2)
        return false;
        sum /= 2;
        if (nums[0] > sum)
        return false;
        vector<vector<bool>> dp(2, vector<bool> (sum + 1));
        for (int i = 0; i < 2; i++)
        {
            dp[i][0] = 1;
        }
        dp[0][nums[0]] = 1;
        for (int i = 1; i < n; i++)
        {
            for (int j = 1; j <= sum; j++)
            {
                dp[i%2][j] = dp[!(i%2)][j];
                if (j - nums[i] >= 0)
                dp[i%2][j] = dp[i%2][j] || dp[!(i%2)][j - nums[i]];
            }
        }
        return dp[(n - 1)%2][sum];
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int arr[N];
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        if(ob.equalPartition(N, arr))
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
// } Driver Code Ends