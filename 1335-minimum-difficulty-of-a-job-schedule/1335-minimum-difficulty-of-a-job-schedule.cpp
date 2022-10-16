class Solution {
public:
    int minDifficulty(vector<int>& jobDifficulty, int d) {
        int n = jobDifficulty.size();
        if (d > n)
            return -1;
        int inf = 1e9;
        vector<int> dp(n + 1, inf);
        dp[n] = 0;
        for (int x = 1; x <= d; x++)
        {
            for (int i = 0; i <= n - x; i++)
            {
                int mx = 0;
                dp[i] = inf;
                for (int j = i; j <= n - x; j++)
                {
                    mx = max(mx, jobDifficulty[j]);
                    dp[i] = min(dp[i], mx + dp[j + 1]);
                }
            }
        }
        return dp[0];
    }
};