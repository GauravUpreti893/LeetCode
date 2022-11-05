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
        vector<int> dp(n, -1);
        dp[0] = nums[0];
        return amount(nums, n - 1, dp);
    }
};