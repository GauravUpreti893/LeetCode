class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n = nums.size(), ans, sum, lo, hi, diff = 1e5, s;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < n - 2; i++)
        {
            while (i < n - 3 && nums[i] == nums[i + 1])
            {
                i++;
            }
            sum = target - nums[i];
            lo = i + 1;
            hi = n - 1;
            while (lo < hi)
            {
                s = nums[lo] + nums[hi];
                if (sum == s)
                {
                    return target;
                }
                else if (sum < s)
                {
                    if (diff >  (s - sum))
                    {
                        ans = s + nums[i];
                        diff = s - sum;
                    }
                    hi--;
                }
                else
                {
                    if (diff > sum - s)
                    {
                        ans = s + nums[i];
                        diff = sum - s;
                    }
                    lo++;
                }
            }
        }
        return ans;
    }
};