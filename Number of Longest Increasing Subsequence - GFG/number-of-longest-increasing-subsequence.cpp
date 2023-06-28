//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    int NumberofLIS(int n, vector<int>&nums) {
        // Code here
        vector<int> dp(n, 1);
        int ans = 1;
        vector<int> freq(n, 1);
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < i; j++)
            {
                if (nums[i] > nums[j])
                {
                    if (1 + dp[j] > dp[i])
                    {
                        dp[i] = 1 + dp[j];
                        freq[i] = freq[j];
                    }
                    else if (1 + dp[j] == dp[i])
                    freq[i] += freq[j];
                }
            }
            ans = max(ans, dp[i]);
        }
        int res = 0;
        for (int i = 0; i < n; i++)
        {
            if (dp[i] == ans)
            res += freq[i];
        }
        return res;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int> arr;
        
        for(int i=0; i<n; ++i){
            long long x; cin>>x;
            arr.push_back(x);
        }
        
        Solution obj;
        cout<<obj.NumberofLIS(n, arr)<<"\n";
    }
    return 0;
}
// } Driver Code Ends