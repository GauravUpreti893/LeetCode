//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int maxpath(int n, int m, vector<vector<int>> &matrix, vector<vector<int>> &dp)
    {
        if (n < 0 || m < 0 || max(n, m) == matrix.size())
        return 0;
        if (dp[n][m] != -1)
        return dp[n][m];
        return dp[n][m] = max({maxpath(n - 1, m - 1, matrix, dp), maxpath(n - 1, m, matrix, dp), maxpath(n - 1, m + 1, matrix, dp)}) + matrix[n][m];
    }
    int maximumPath(int N, vector<vector<int>> Matrix)
    {
        // code here
        vector<vector<int>> dp(N, vector<int> (N, -1));
        for (int i = 0; i < N; i++)
        dp[0][i] = Matrix[0][i];
        int ans = 0;
        for (int i = 0; i < N; i++)
        {
            ans = max(ans, maxpath(N - 1, i, Matrix, dp));
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        vector<vector<int>> Matrix(N, vector<int>(N, 0));
        for(int i = 0;i < N*N;i++)
            cin>>Matrix[(i/N)][i%N];
        
        Solution ob;
        cout<<ob.maximumPath(N, Matrix)<<"\n";
    }
    return 0;
}
// } Driver Code Ends