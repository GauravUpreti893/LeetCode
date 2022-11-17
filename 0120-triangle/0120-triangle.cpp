class Solution {
public:
    int pathsum(int n, int m, vector<vector<int>> &triangle, vector<vector<int>> &dp)
    {
        if (dp[n][m] != 1e9)
            return dp[n][m];
        return dp[n][m] = min(pathsum(n + 1, m, triangle, dp), pathsum(n + 1, m + 1, triangle, dp)) + triangle[n][m]; 
    }
    int minimumTotal(vector<vector<int>>& triangle) {
        vector<vector<int>> dp;
        int n = triangle.size();
        for (int i = 0; i < n; i++)
        {
            vector<int> v(i + 1, 1e9);
            dp.push_back(v);
        }
        for (int i = 0; i < n; i++)
        {
            dp[n - 1][i] = triangle[n - 1][i];
        }
        return pathsum(0, 0, triangle, dp);
    }
};