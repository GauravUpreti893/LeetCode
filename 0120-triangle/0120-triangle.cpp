class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        vector<vector<int>> dp;
        int n = triangle.size();
        vector<int> v;
        v.push_back(triangle[0][0]);
        dp.push_back(v);
        for (int i = 1; i < n; i++)
        {
            vector<int> temp(i + 1);
            temp[0] = dp[i - 1][0] + triangle[i][0];
            for (int j = 1; j < i; j++)
            {
                temp[j] = min(dp[i - 1][j], dp[i - 1][j - 1]) + triangle[i][j];
            }  
            temp[i] = dp[i - 1][i - 1] + triangle[i][i];
            dp.push_back(temp);
        }
        int mn = dp[n - 1][0];
        for (int i = 1; i < n; i++)
        {
            mn = min(mn, dp[n - 1][i]);
        }
        return mn;
    }
};