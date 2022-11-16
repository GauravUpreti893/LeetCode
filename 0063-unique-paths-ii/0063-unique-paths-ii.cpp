class Solution {
public:
    int paths(int n, int m, vector<vector<int>> &obstacleGrid, vector<vector<int>> &dp)
    {
        if (n < 0 || m < 0 || obstacleGrid[n][m])
            return 0;
        if (dp[n][m] != -1)
            return dp[n][m];
        return dp[n][m] = paths(n - 1, m, obstacleGrid, dp) + paths(n, m - 1, obstacleGrid, dp);
    }
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int n = obstacleGrid.size();
        int m = obstacleGrid[0].size();
        vector<vector<int>> dp(n, vector<int> (m, -1));
        dp[0][0] = 1;
        return paths(n - 1, m - 1, obstacleGrid, dp);
    }
};