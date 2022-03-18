class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = 0,ans = -(1e4 + 1);
        int n = nums.size();
        for (int i = 0; i < n; i++)
        {
            sum += nums[i];
            ans = max(ans,sum);
            if (sum < 0)
                sum = 0;
        }
        return ans;
    }
};