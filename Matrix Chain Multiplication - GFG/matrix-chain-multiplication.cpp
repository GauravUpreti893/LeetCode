//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int matrixMultiplication(int N, int arr[])
    {
        // code here
        vector<vector<int>> dp(N - 1, vector<int> (N - 1, 0));
        for (int st = N - 1; st >= 0; st--)
        {
            for (int end = st + 1; end < N - 1; end++)
            {
                int ans = 1e9;
                for (int i = st; i < end; i++)
                {
                    ans = min(ans, dp[st][i] + dp[i + 1][end] + arr[st] * arr[i + 1] * arr[end + 1]);
                }
                dp[st][end] = ans;
            }
        }
        return dp[0][N - 2];
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
        cout<<ob.matrixMultiplication(N, arr)<<endl;
    }
    return 0;
}
// } Driver Code Ends