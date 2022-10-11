class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int n = nums.size();
        vector<int> prefix(n), suffix(n);
        int mn = INT_MAX, mx = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            prefix[i] = mn;
            mn = min(mn, nums[i]);
        }
        for (int i = n - 1; i >= 0; i--)
        {
            suffix[i] = mx;
            mx = max(mx, nums[i]);
        }
        for (int i = 1; i < n - 1; i++)
        {
            if (prefix[i] < nums[i] && suffix[i] > nums[i])
            {
                return true;
            }
        }
        return false;
    }
};