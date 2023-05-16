//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int cut(string &s, vector<int> &dp, int idx)
    {
        int n = s.size();
        if (idx < 0)
        return 0;
        if (dp[idx] != -1)
        return dp[idx];
        long long val = 0, one = 1;
        int ans = n + 1;
        for (int i = idx; i >= 0; i--)
        {
            if (s[i] == '0')
            continue;
            if (s[i] == '1')
            val |= (one<<(idx - i));
            long long temp = val;
            bool flag = false;
            while (temp != 1)
            {
                if (temp % 5)
                {
                    flag = true;
                    break;
                }
                temp /= 5;
            }
            if (flag)
            continue;
            int res = cut(s, dp, i - 1);
            ans = min(ans, 1 + res);
        }
        return dp[idx] = ans;
    }
    int cuts(string s){
        //code
       int n = s.size();
       vector<int> dp(n, -1);
       int res = cut(s, dp, n - 1);
       if (res == n + 1)
       return -1;
       return res;
    }
};

//{ Driver Code Starts.
int main()
{
   int t;
   cin>>t;
   string s;
   while(t--)
   {
    cin>>s;
    Solution obj;
    int res=obj.cuts(s);
    cout<<res<<endl;

   }


    return 0;
}

// } Driver Code Ends