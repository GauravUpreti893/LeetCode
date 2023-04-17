class Solution {
public:
    int findTargetSumWays(vector<int>& arr, int d) {
        int sum = 0;
        int n = arr.size();
        for (int i = 0; i < n; i++)
        {
            sum += arr[i];
        }
        if ((sum + d) % 2)
        return 0;
        int x = (sum + d)/2;
        if (x < 0)
            return 0;
        vector<vector<int>> dp(2, vector<int> (x + 1, 0));
        dp[0][0] = 1;
        dp[1][0] = 1;
        int mod = 1e9 + 7;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 0; j <= x; j++)
            {
                dp[i%2][j] = dp[!(i%2)][j];
                if (j - arr[i - 1] >= 0)
                {
                    dp[i%2][j] += dp[!(i%2)][j - arr[i - 1]];
                    dp[i%2][j] %= mod;
                }
            }
        }
        return dp[n%2][x];
    }
};