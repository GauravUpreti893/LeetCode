//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int dfs(vector<vector<int>> &matrix, vector<vector<int>> &dp, int i, int j)
    {
        int n = matrix.size(), m = matrix[0].size();
        if (dp[i][j] != -1)
        return dp[i][j];
        int ans = 1;
        if (i && matrix[i - 1][j] > matrix[i][j])
        {
            ans = max(ans, 1 + dfs(matrix, dp, i - 1, j));
        }
        if (i < n - 1 && matrix[i + 1][j] > matrix[i][j])
        {
            ans = max(ans, 1 + dfs(matrix, dp, i + 1, j));
        }
        if (j && matrix[i][j - 1] > matrix[i][j])
        {
            ans = max(ans, 1 + dfs(matrix, dp, i, j - 1));
        }
        if (j < m - 1 && matrix[i][j + 1] > matrix[i][j])
        {
            ans = max(ans, 1 + dfs(matrix, dp, i, j + 1));
        }
        return dp[i][j] = ans;
    }
    int longestIncreasingPath(vector<vector<int>>& matrix, int n, int m) {

        // Code here
        vector<vector<int>> dp(n, vector<int> (m, -1));
        int ans = 1;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                dp[i][j] = dfs(matrix, dp, i, j);
                ans = max(ans, dp[i][j]);
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> matrix(n, vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> matrix[i][j];
            }
        }
        Solution obj;
        cout << obj.longestIncreasingPath(matrix, n, m) << endl;
    }
    return 0;
}

// } Driver Code Ends