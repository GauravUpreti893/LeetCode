//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

// User function Template for C++

class Solution{
public:
    int ways(string &s, vector<vector<vector<long long>>> &dp, int st, int end, bool flag)
    {
        if (st == end)
        {
            bool f = (s[st] == 'T');
            return flag == f;
        }
        int mod = 1003;
        if (dp[st][end][flag] != -1)
        return dp[st][end][flag];
        int ans = 0;
        for (int i = st + 1; i < end; i += 2)
        {
            if (flag)
            {
                if (s[i] == '&')
                {
                    long long left = ways(s, dp, st, i - 1, 1);
                    long long right = ways(s, dp, i + 1, end, 1);
                    ans += (left * right) % mod;
                    ans %= mod;
                }
                else if (s[i] == '|')
                {
                    long long left = ways(s, dp, st, i - 1, 1);
                    long long right = ways(s, dp, i + 1, end, 0);
                    ans += (left * right) % mod;
                    ans %= mod;
                    left = ways(s, dp, st, i - 1, 0);
                    right = ways(s, dp, i + 1, end, 1);
                    ans += (left * right) % mod;
                    ans %= mod;
                    left = ways(s, dp, st, i - 1, 1);
                    right = ways(s, dp, i + 1, end, 1);
                    ans += (left * right) % mod;
                    ans %= mod;
                }
                else
                {
                    long long left = ways(s, dp, st, i - 1, 1);
                    long long right = ways(s, dp, i + 1, end, 0);
                    ans += (left * right) % mod;
                    ans %= mod;
                    left = ways(s, dp, st, i - 1, 0);
                    right = ways(s, dp, i + 1, end, 1);
                    ans += (left * right) % mod;
                    ans %= mod;
                }
            }
            else
            {
                if (s[i] == '&')
                {
                    long long left = ways(s, dp, st, i - 1, 1);
                    long long right = ways(s, dp, i + 1, end, 0);
                    ans += (left * right) % mod;
                    ans %= mod;
                    left = ways(s, dp, st, i - 1, 0);
                    right = ways(s, dp, i + 1, end, 1);
                    ans += (left * right) % mod;
                    ans %= mod;
                    left = ways(s, dp, st, i - 1, 0);
                    right = ways(s, dp, i + 1, end, 0);
                    ans += (left * right) % mod;
                    ans %= mod;
                }
                else if (s[i] == '|')
                {
                    long long left = ways(s, dp, st, i - 1, 0);
                    long long right = ways(s, dp, i + 1, end, 0);
                    ans += (left * right) % mod;
                    ans %= mod;
                }
                else
                {
                    long long left = ways(s, dp, st, i - 1, 0);
                    long long right = ways(s, dp, i + 1, end, 0);
                    ans += (left * right) % mod;
                    ans %= mod;
                    left = ways(s, dp, st, i - 1, 1);
                    right = ways(s, dp, i + 1, end, 1);
                    ans += (left * right) % mod;
                    ans %= mod;
                }
            }
        }
        return dp[st][end][flag] = ans;
    }
    int countWays(int N, string S){
        // code here
       vector<vector<vector<long long>>> dp(N, vector<vector<long long>> (N, vector<long long> (2, -1)));
        return ways(S, dp, 0, N - 1, 1);
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        string S;
        cin>>S;
        
        Solution ob;
        cout<<ob.countWays(N, S)<<"\n";
    }
    return 0;
}
// } Driver Code Ends