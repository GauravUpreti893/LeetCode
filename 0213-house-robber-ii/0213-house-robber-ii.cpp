class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        if (n == 1)
            return nums[0];
        int prev = nums[0], prev2 = 0, temp;
        for (int i = 2; i < n; i++)
        {
            temp = max(prev, prev2 + nums[i - 1]);
            prev2 = prev;
            prev = temp;
        }
        int res = prev;
        prev = 0;
        prev2 = 0;
        for (int i = 2; i <= n; i++)
        {
            temp = max(prev, prev2 + nums[i - 1]);
            prev2 = prev;
            prev = temp;
        }
        return max(prev, res);
    }
};