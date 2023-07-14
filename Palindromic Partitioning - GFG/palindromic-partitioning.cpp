//{ Driver Code Starts
// Initial Template for c++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int palindromicPartition(string &s)
    {
        // code here
        int n = s.size();
        vector<int> dp(n + 1, 0);
        vector<vector<bool>> ispal(n, vector<bool> (n, 0));
        for (int i = 0; i < n; i++)
        {
            int j = i - 1, k = i + 1;
            ispal[i][i] = 1;
            while ((j >= 0) && (k < n) && s[j] == s[k])
            {
                ispal[j--][k++] = 1;
            }
            j = i, k = i + 1;
            while ((j >= 0) && (k < n) && s[j] == s[k])
            {
                ispal[j--][k++] = 1;
            }
        }
        for (int idx = n - 1; idx >= 0; idx--)
        {
            if (ispal[idx][n - 1])
            {
                dp[idx] = 0;
                continue;
            }
            int ans = n - 1;
            for (int i = idx; i < n; i++)
            {
                if (ispal[idx][i])
                ans = min(ans, 1 + dp[i + 1]);
            }
            dp[idx] = ans;
        }
        return dp[0];
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        
        Solution ob;
        cout<<ob.palindromicPartition(str)<<"\n";
    }
    return 0;
}
// } Driver Code Ends