//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
  public:	
	int distinctSubsequences(string s)
	{
	    // Your code goes here
	    int n = s.size();
        long long mod =1e9 + 7;
        vector<long long> dp(n + 1, 0);
        vector<int> pos(26, -1);
        for (int i = 1; i <= n; i++)
        {
            if (pos[s[i - 1] - 'a'] == -1)
            {
                pos[s[i - 1] - 'a'] = i;
                dp[i] = dp[i - 1] + dp[i - 1] + 1;
            }
            else
            {
                dp[i] = (dp[i - 1] + dp[i - 1]) % mod - dp[pos[s[i - 1] - 'a'] - 1] + mod;
                pos[s[i - 1] - 'a'] = i;
            }
            dp[i] %= mod;
        }
        return 1 + dp[n];
	}
};

//{ Driver Code Starts.

int main() 
{
   	

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string s;
   		cin >> s;

        Solution ob;
   		cout << ob.distinctSubsequences(s) << "\n";
   	}

    return 0;
}
// } Driver Code Ends