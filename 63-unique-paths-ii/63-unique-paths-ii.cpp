class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m = obstacleGrid.size();
        int n = obstacleGrid[0].size();
        vector<vector<int>> table(2, vector<int> (n + 1, 0));
        table[0][1] = 1;
        for (int i = 1; i <= m; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                table[i%2][j] = table[!(i%2)][j] + table[i%2][j - 1];
                if (obstacleGrid[i - 1][j - 1])
                    table[i%2][j] = 0;
            }
        }
        return table[m%2][n];
    }
    
};