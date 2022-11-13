class Solution {
public:
    int findGCD(vector<int>& nums) {
        int mn = nums[0], mx = nums[0], n = nums.size();
        for (int i = 1; i < n; i++)
        {
            mn = min(mn, nums[i]);
            mx = max(mx, nums[i]);
        }
        return __gcd(mn,mx);
    }
};