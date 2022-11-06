class Solution {
public:
    int amount(vector<int> &nums, int n, vector<int> &dp)
    {
        if (n < 0)
            return 0;
        if (dp[n] != -1)
            return dp[n];
        return dp[n] = max(amount(nums, n - 2, dp) + nums[n], amount(nums, n - 1, dp));
    }
    int rob(vector<int>& nums) {
        int n = nums.size();
        if (n == 1)
            return nums[0];
        vector<int> dp(n, -1);
        dp[0] = nums[0];
        int res = amount(nums, n - 2, dp);
        dp = vector<int> (n, -1);
        dp[0] = 0;
        return max(res, amount(nums, n - 1, dp));
    }
};