//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int equalPartition(int N, int arr[])
    {
        // code here
        int s = 0;
        for (int i = 0; i < N; i++)
        s += arr[i];
        if (s % 2)
        return 0;
        s /= 2;
        vector<vector<bool>> dp(N + 1, vector<bool> (s + 1, 0));
        for (int i = 0; i <= N; i++)
        dp[i][0] = 1;
        for (int idx = N - 1; idx >= 0; idx--)
        {
            for (int sum = 0; sum <= s; sum++)
            {
                dp[idx][sum] = dp[idx + 1][sum] | ((sum - arr[idx] >= 0) ? dp[idx + 1][sum - arr[idx]] : false);
            }
        }
        return dp[0][s];
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