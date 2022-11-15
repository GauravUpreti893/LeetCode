class Solution {
public:
    int mod = 1e9 + 7;
    int count(int l, vector<int> &dp, int z, int o)
    {
        if (l < 0)
            return 0;
        if (dp[l] != -1)
            return dp[l];
        return dp[l] = (count(l - z, dp, z, o) + count(l - o, dp, z, o)) % mod;
    }
    int countGoodStrings(int low, int high, int zero, int one) {
        int ans = 0;
        vector<int> dp(high + 1, -1);
        dp[0] = 1;
        for (int l = low; l <= high; l++)
        {
            ans += count(l, dp, zero, one);
            ans = ans % mod;
        }
        
        return ans;
    }
};