class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int n = nums.size();
        vector<int> prefix(n), suffix(n);
        int mn = nums[0], mx = INT_MIN;
        for (int i = n - 1; i >= 0; i--)
        {
            suffix[i] = mx;
            mx = max(mx, nums[i]);
        }
        for (int i = 1; i < n - 1; i++)
        {
            if (mn < nums[i] && suffix[i] > nums[i])
            {
                return true;
            }
            mn = min(mn, nums[i]);
        }
        return false;
    }
};