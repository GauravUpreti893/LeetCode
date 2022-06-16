class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int lo = 0, hi = n - 1, mid;
        while (lo < n - 1 && nums[lo] == nums[lo + 1])
        {
            lo++;
        }
        if (lo == n - 1)
        {
            return nums[lo];
        }
        while (hi > lo && nums[hi] == nums[hi - 1])
        {
            hi--;
        }
        if (nums[lo] == nums[hi])
        {
            hi--;
        }
        n = hi + 1;
        while (lo < hi)
        {
            mid = (lo + hi)/2;
            if (nums[mid] > nums[n - 1])
            {
                lo = mid + 1;
            }
            else
            {
                hi = mid;
            }
        }
        return nums[lo];
    }
};