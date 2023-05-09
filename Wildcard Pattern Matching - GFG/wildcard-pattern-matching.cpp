//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
  public:
/*You are required to complete this method*/
    int wildCard(string &p, string &s)
    {
        int n = s.size(), m = p.size();
        vector<vector<bool>> dp(2, vector<bool> (m + 1, 0));
        dp[0][0] = 1;
        for (int i = 1; i <= m; i++)
        {
            if (p[i - 1] != '*')
            break;
            dp[0][i] = 1;
        }
        for (int i = 1; i <= n; i++)
        {
            dp[i%2][0] = 0;
            for (int j = 1; j <= m; j++)
            {
                if (s[i - 1] == p[j - 1] || p[j - 1] == '?')
                {
                    dp[i%2][j] = dp[!(i%2)][j - 1];
                }
                else if (p[j - 1] == '*')
                {
                    dp[i%2][j] = dp[!(i%2)][j] | dp[i%2][j - 1];
                }
                else
                {
                    dp[i%2][j] = 0;
                }
            }
        }
        return dp[n%2][m];
    }
};

//{ Driver Code Starts.
int main()
{
   int t;
   cin>>t;
   while(t--)
   {
           string pat,text;
           cin>>pat;
cin.ignore(numeric_limits<streamsize>::max(),'\n');
           cin>>text;
           Solution obj;
           cout<<obj.wildCard(pat,text)<<endl;
   }
}

// } Driver Code Ends