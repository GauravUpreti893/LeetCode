//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++

class Solution{   
public:
    long long colors(int *r, int *g, int *b, vector<vector<long long>> &dp, int idx, int prev)
    {
        if (prev != -1 && dp[idx][prev] != -1)
        return dp[idx][prev];
        long long ans = 1e11;
        if (prev != 0)
        {
            long long res = r[idx];
            res += colors(r, g, b, dp, idx + 1, 0);
            ans = min(ans, res);
        }
        if (prev != 1)
        {
            long long res = g[idx];
            res += colors(r, g, b, dp, idx + 1, 1);
            ans = min(ans, res);
        }
        if (prev != 2)
        {
            long long res = b[idx];
            res += colors(r, g, b, dp, idx + 1, 2);
            ans = min(ans, res);
        }
        if (prev == -1)
        return ans;
        return dp[idx][prev] = ans;
    }
    long long int distinctColoring(int N, int r[], int g[], int b[]){
        // code here 
        vector<vector<long long>> dp(N, vector<long long> (3, -1));
        dp[N - 1][0] = min(g[N - 1], b[N - 1]);
        dp[N - 1][1] = min(r[N - 1], b[N - 1]);
        dp[N - 1][2] = min(g[N - 1], r[N - 1]);
        return colors(r, g, b, dp, 0, -1);
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin >> N;
        int r[N],g[N],b[N];
        for(int i = 0; i < N; i++)
            cin >> r[i];
        for(int i = 0; i < N; i++)
            cin >> g[i];
        for(int i = 0; i < N; i++)
            cin >> b[i];
        
        Solution ob;
        cout << ob.distinctColoring(N, r, g, b) << endl;
    }
    return 0; 
}
// } Driver Code Ends