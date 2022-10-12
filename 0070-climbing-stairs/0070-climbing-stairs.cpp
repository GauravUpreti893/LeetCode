class Solution {
public:
    int nstep(int n, vector<int> &dp)
    {
        if (dp[n] != -1)
            return dp[n];
        return dp[n] = nstep(n - 1, dp) + nstep(n - 2, dp);
    }
    int climbStairs(int n) {
        vector<int> dp(n + 1, -1);
        dp[0] = 1;
        dp[1] = 1;
        return nstep(n, dp);
    }
};