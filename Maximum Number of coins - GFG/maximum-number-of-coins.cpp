//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution{
    public:
        int coins(vector<int> &arr, int i, int j, vector<vector<int>> &dp, int left, int right)
        {
            int n = arr.size();
            if (i >= n || j >= n || i < 0 || j < 0 || i > j)
            return 0;
            if (dp[i][j] != -1)
            return dp[i][j];
            int ans = 0;
            for (int k = i; k <= j; k++)
            {
                int x = coins(arr, i, k - 1, dp, left, arr[k]);
                int y = coins(arr, k + 1 , j, dp, arr[k], right);
                ans = max(ans, x + y + left * arr[k] * right);
            }
            return dp[i][j] = ans;
        }
        int maxCoins(int N, vector <int> &a)
        {
            // write your code here
            vector<vector<int>> dp(N, vector<int> (N, -1));
            return coins(a, 0, N - 1, dp, 1, 1);
        }
};

//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++)
            cin>>a[i];
        Solution S;
        cout<<S.maxCoins(n,a)<<endl;
    }
    return 0;
}
// } Driver Code Ends