class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int ans = nums[0],mx = nums[0], mn = nums[0];
        int n = nums.size();
        for (int i = 1; i < n; i++)
        {
            if (nums[i] < 0)
            {
                swap(mx,mn);
            }
           mx = max(nums[i],mx*nums[i]);
           mn = min(nums[i], mn*nums[i]);
            ans = max(ans, mx);
        }
        return ans;
    }
};