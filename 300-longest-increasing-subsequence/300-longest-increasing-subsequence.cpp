class Solution {
public:
    int func(vector<int> &nums, vector<int>&lis, int idx)
    {
        if (lis[idx] != -1)
            return lis[idx];
        for (int i = 0; i < idx; i++)
        {
            if (nums[i] < nums[idx])
            {
                lis[idx] = max(lis[idx], func(nums, lis, i) + 1);
            }
        }
        lis[idx] = max(lis[idx], 1);
        return lis[idx];
    }
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        vector<int> lis(n , -1);
        lis[0] = 1;
        int ans = 0;
        for (int i = 0; i < n; i++)
        func(nums, lis, i);
        for (int i = 0; i < n; i++)
        {
            ans = max(ans, lis[i]);
        }
        return ans;
    }
};