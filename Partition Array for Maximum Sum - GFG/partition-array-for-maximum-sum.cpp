//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    int solve(int n, int k, vector<int>& arr){
        // Code here
        vector<int> dp(n + 1, 0);
        for (int idx = n - 1; idx >= 0; idx--)
        {
            int mx = 0, ans = 0;
            for (int i = 0; i < k; i++)
            {
                int x = i + idx;
                if (x == n)
                break;
                mx = max(mx, arr[x]);
                ans = max(ans, mx * (i + 1) + dp[i + idx + 1]);
            }
            dp[idx] = ans;
        }
        return dp[0];
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,k; cin>>n>>k;
        vector<int> arr;
        
        for(int i=0; i<n; ++i){
            int x; cin>>x;
            arr.push_back(x);
        }
        
        Solution obj;
        cout<<obj.solve(n,k,arr)<<"\n";
    }
    return 0;
}
// } Driver Code Ends