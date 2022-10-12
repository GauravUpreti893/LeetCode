class Solution {
public:
    int fib(int n) {
        if (!n)
            return 0;
        vector<int> dp(2);
        dp[0] = 0;
        dp[1] = 1;
        for (int i = 2; i <= n; i++)
            dp[i%2] = dp[!(i % 2)] + dp[i % 2];
        return dp[n%2];
    }
};