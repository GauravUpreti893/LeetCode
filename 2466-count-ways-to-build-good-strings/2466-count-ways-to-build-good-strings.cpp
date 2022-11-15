class Solution {
public:
    int countGoodStrings(int low, int high, int zero, int one) {
        vector<int> dp(high + 1, 0);
        dp[0] = 1;
        int ans = 0, mod = 1e9 + 7;
        for (int i = 1; i <= high; i++)
        {
            if (i >= zero)
            {
                dp[i] += dp[i - zero];
                dp[i] %= mod;
            }
            if (i >= one)
            {
                dp[i] += dp[i - one];
                dp[i] %= mod;
            }
            if (i >= low)
            {
                ans += dp[i];
                ans %= mod;
            }
        }
        return ans;
    }
};