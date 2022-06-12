class Solution {
public:
    bool check(vector<int>&nums, int threshold,int div)
    {
        int n = nums.size();
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += ceil(nums[i]/(div/1.0));
            if (sum > threshold)
                return false;
        }
        return true;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int lo = 1, hi = 1e6;
        int mid;
        while (lo <= hi)
        {
            mid = (lo + hi)/2;
            if (check(nums,threshold,mid))
            {
                hi = mid - 1;
            }
            else
            {
                lo = mid + 1;
            }
        }
        return lo;
    }
};