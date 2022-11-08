class Solution {
public:
    int npaths(int n, int m, vector<vector<int>> &dp)
    {
        if (n < 0 || m < 0)
            return 0;
        if (dp[n][m] != -1)
            return dp[n][m];
        return dp[n][m] = npaths(n - 1, m, dp) + npaths(n, m - 1, dp);
    }
    int uniquePaths(int m, int n) {
        vector<vector<int>> dp(m, vector<int> (n, -1));
        dp[0][0] = 1;
        return npaths(m - 1, n - 1, dp);
    }
};