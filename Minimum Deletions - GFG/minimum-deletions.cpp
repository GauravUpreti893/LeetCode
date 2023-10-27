//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    int minimumNumberOfDeletions(string S) { 
        // code here
        int n = S.size();
        vector<vector<int>> dp(n + 1, vector<int> (n + 1, 0));
        for (int st = n - 1; st >= 0; st--)
        {
            dp[st][st] = 1;
            for (int end = st + 1; end < n; end++)
            {
                if (S[st] == S[end])
                dp[st][end] = 2 + dp[st + 1][end - 1];
                else
                dp[st][end] = max(dp[st + 1][end], dp[st][end - 1]);
            }
        }
        return n - dp[0][n - 1];
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