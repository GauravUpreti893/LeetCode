class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int n = obstacleGrid.size();
        int m = obstacleGrid[0].size();
        vector<vector<int>> dp(2, vector<int> (m + 1));
        for (int i = 0; i < m; i++)
        {
            dp[0][i] = 0;
        }
        dp[0][1] = 1;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                if (obstacleGrid[i - 1][j - 1])
                    dp[i%2][j] = 0;
                else
                {
                    dp[i%2][j] = dp[!(i%2)][j] + dp[i%2][j - 1];
                }
            }
        }
        return dp[n%2][m];
    }
};