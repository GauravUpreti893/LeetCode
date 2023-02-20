//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++

class Solution{   
public:
    int countPaths(int N){
        // code here 
        vector<vector<long long>> dp(2, vector<long long> (4, 0));
        dp[0][0] = 1;
        dp[0][1] = 0;
        dp[0][2] = 0;
        dp[0][3] = 0;
        long long mod = 1e9 + 7;
        for (int i = 1; i <= N; i++)
        {
            for (int j = 0; j < 4; j++)
            {
                dp[i%2][j] = 0;
                for (int k = 0; k < 4; k++)
                {
                    if (k != j)
                    {
                        dp[i%2][j] += dp[!(i%2)][k];
                        dp[i%2][j] %= mod;
                    }
                }
            }
        }
        return dp[N%2][0];
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
        
        Solution ob;
        cout << ob.countPaths(N) << endl;
    }
    return 0; 
}

// } Driver Code Ends