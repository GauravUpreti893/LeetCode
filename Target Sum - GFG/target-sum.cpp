//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//Back-end complete function Template for C++

class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int target) {
        int sum=0;
        int n=nums.size();
        if(n==1)
        return nums[0]==abs(target);

        for(int i=0;i<n;i++)
        sum+=nums[i];
        
        if((sum+target)%2)
        return 0;
        
        int find=(sum+target)/2;
        if (find < 0)
        return 0;
        vector<vector<int>> dp(n+1,vector<int>(find+1,0));
        for(int i=0;i<=n;i++){
            for(int j=0;j<=find;j++){
                if(i==0)
                dp[i][j]=0;
                if(j==0)
                dp[i][j]=1;
            }
        }

        for(int i=1;i<=n;i++){
            for(int j=0;j<=find;j++){
                if(nums[i-1]<=j)
                dp[i][j]=dp[i-1][j-nums[i-1]]+dp[i-1][j];
                else
                dp[i][j]=dp[i-1][j];
            }
        }

        return dp[n][find];
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