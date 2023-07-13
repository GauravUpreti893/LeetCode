//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

// User function Template for C++

class Solution{
public:
    int countWays(int N, string s){
        // code here
       vector<vector<vector<long long>>> dp(N + 1, vector<vector<long long>> (N + 1, vector<long long> (2, 0)));
       for (int st = N - 1; st >= 0; st--)
       {
           for (int end = st; end < N; end++)
           {
                if (st == end)
                {
                    bool f = (s[st] == 'T');
                    dp[st][end][0] = (0 == f);
                    dp[st][end][1] = (1 == f);
                    continue;
                }
                int mod = 1003;
                int ans = 0, ans1 = 0;
                for (int i = st + 1; i < end; i += 2)
                {
                        if (s[i] == '&')
                        {
                            long long left = dp[st][i - 1][1];
                            long long right = dp[i + 1][end][1];
                            ans += (left * right) % mod;
                            ans %= mod;
                        }
                        else if (s[i] == '|')
                        {
                            long long left = dp[st][i - 1][1];
                            long long right = dp[i + 1][end][0];
                            ans += (left * right) % mod;
                            ans %= mod;
                            left = dp[st][i - 1][0];
                            right = dp[i + 1][end][1];
                            ans += (left * right) % mod;
                            ans %= mod;
                            left = dp[st][i - 1][1];
                            right = dp[i + 1][end][1];
                            ans += (left * right) % mod;
                            ans %= mod;
                        }
                        else
                        {
                            long long left = dp[st][i - 1][1];
                            long long right = dp[i + 1][end][0];
                            ans += (left * right) % mod;
                            ans %= mod;
                            left = dp[st][i - 1][0];
                            right = dp[i + 1][end][1];
                            ans += (left * right) % mod;
                            ans %= mod;
                        }
                    
                        if (s[i] == '&')
                        {
                            long long left = dp[st][i - 1][1];
                            long long right = dp[i + 1][end][0];
                            ans1 += (left * right) % mod;
                            ans1 %= mod;
                            left = dp[st][i - 1][0];
                            right = dp[i + 1][end][1];
                            ans1 += (left * right) % mod;
                            ans1 %= mod;
                            left = dp[st][i - 1][0];
                            right = dp[i + 1][end][0];
                            ans1 += (left * right) % mod;
                            ans1 %= mod;
                        }
                        else if (s[i] == '|')
                        {
                            long long left = dp[st][i - 1][0];
                            long long right = dp[i + 1][end][0];
                            ans1 += (left * right) % mod;
                            ans1 %= mod;
                        }
                        else
                        {
                            long long left = dp[st][i - 1][0];
                            long long right = dp[i + 1][end][0];
                            ans1 += (left * right) % mod;
                            ans1 %= mod;
                            left = dp[st][i - 1][1];
                            right = dp[i + 1][end][1];
                            ans1 += (left * right) % mod;
                            ans1 %= mod;
                        }

                }
                dp[st][end][1] = ans;
                dp[st][end][0] = ans1;
            }
       }
        return dp[0][N - 1][1];
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