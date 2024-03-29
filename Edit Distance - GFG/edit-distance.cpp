//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int editDistance(string& word1, string& word2) {
        // Code here
        int n = word1.size(), m = word2.size();
        vector<vector<int>> dp(2, vector<int> (m + 1, 0));
        for (int i = 1; i <= m; i++)
        {
            dp[0][i] = i;
        }
        for (int i = 1; i <= n; i++)
        {
            dp[i%2][0] = i;
            for (int j = 1; j <= m; j++)
            {
                if (word1[i - 1] == word2[j - 1])
                {
                    dp[i%2][j] = dp[!(i%2)][j - 1];
                }
                else
                {
                    dp[i%2][j] = 1 + min({dp[!(i%2)][j], dp[i%2][j - 1], dp[!(i%2)][j - 1]});
                }
            }
        }
        return dp[n%2][m];
    }
};

//{ Driver Code Starts.
int main() {
    int T;
    cin >> T;
    while (T--) {
        string s, t;
        cin >> s >> t;
        Solution ob;
        int ans = ob.editDistance(s, t);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends