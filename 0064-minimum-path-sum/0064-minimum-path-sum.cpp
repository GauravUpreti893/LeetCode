class Solution {
public:
    int pathsum(int n, int m, vector<vector<int>> &dp, vector<vector<int>> &grid)
    {
        if (n < 0 || m < 0)
            return 1e9;
        if (dp[n][m] != -1)
            return dp[n][m];
        return dp[n][m] = min(pathsum(n - 1, m, dp, grid), pathsum(n, m - 1, dp, grid)) + grid[n][m];       
    }
    int minPathSum(vector<vector<int>>& grid) {
        int n = grid.size(), m = grid[0].size();
        vector<vector<int>> dp(n, vector<int> (m, -1));
        dp[0][0] = grid[0][0];
        return pathsum(n - 1, m - 1, dp, grid);
    }
};