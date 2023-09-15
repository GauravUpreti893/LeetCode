//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    bool check(int arr[], vector<vector<bool>> &dp, int idx, int sum)
    {
        int n = dp.size();
        if (!sum)
        return true;
        if (idx == n || sum < 0)
        return false;
        if (!dp[idx][sum])
        return false;
        return dp[idx][sum] = check(arr, dp, idx + 1, sum) || check(arr, dp, idx + 1, sum - arr[idx]);
    }
    int equalPartition(int N, int arr[])
    {
        // code here
        int sum = 0;
        for (int i = 0; i < N; i++)
        sum += arr[i];
        if (sum % 2)
        return 0;
        sum /= 2;
        vector<vector<bool>> dp(N, vector<bool> (sum + 1, 1));
        return check(arr, dp, 0, sum);
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