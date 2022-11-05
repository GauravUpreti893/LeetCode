class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        int prev = nums[0], prev2 = 0;
        int sum;
        for (int i = 2; i <= n; i++)
        {
            sum = max(prev2 + nums[i - 1], prev);
            prev2 = prev;
            prev = sum;
        }
        return prev;
    }
};