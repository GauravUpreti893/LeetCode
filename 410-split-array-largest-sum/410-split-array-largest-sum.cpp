class Solution {
public:
    bool check(vector<int>& nums, int m,int sum)
    {
        int count = 0, s = 0,i = 0,n = nums.size();
        while (i < n)
        {
            if (count == m)
            {
                return false;
            }
            s += nums[i];
            if (s > sum)
            {
                s = 0;
                count++;
            }
            else
            {
                i++;
            }
        }
        return true;
    }
    int splitArray(vector<int>& nums, int m) {
        int lo = 0, hi = 1e9;
        int mid;
        while (lo <= hi)
        {
            mid = (lo + hi)/2;
            if (check(nums,m,mid))
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