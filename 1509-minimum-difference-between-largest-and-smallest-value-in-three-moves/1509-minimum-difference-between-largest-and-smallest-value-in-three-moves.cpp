class Solution {
public:
    int minDifference(vector<int>& nums) {
        int n = nums.size();
        if (n <= 4)
            return 0;
        sort(nums.begin(), nums.end());
        int mn = nums[n - 1] - nums[0];
        mn = min(mn, nums[n - 4] - nums[0]);
        mn = min(mn, nums[n - 1] - nums[3]);
        mn = min(mn, nums[n - 3] - nums[1]);
        mn = min(mn, nums[n - 2] - nums[2]);
        return mn;
    }
};