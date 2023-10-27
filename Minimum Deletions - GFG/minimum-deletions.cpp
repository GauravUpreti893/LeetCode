//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    int maxlen(string &s, vector<vector<int>> &dp, int st, int end)
    {
        if (st > end)
        return 0;
        if (st == end)
        return 1;
        if (dp[st][end] != -1)
        return dp[st][end];
        if (s[st] == s[end])
        return 2 + maxlen(s, dp, st + 1, end - 1);
        return dp[st][end] =  max(maxlen(s, dp, st + 1, end), maxlen(s, dp, st, end - 1));
    }
    int minimumNumberOfDeletions(string S) { 
        // code here
        int n = S.size();
        vector<vector<int>> dp(n, vector<int> (n, -1));
        return n - maxlen(S, dp, 0, n - 1);
    } 
};

//{ Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--){
        string S;
        cin >> S;
        Solution obj;
        cout << obj.minimumNumberOfDeletions(S) << endl;
    }
    return 0;
}
// } Driver Code Ends