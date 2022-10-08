class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n = nums.size(), ans, sum, lo, hi, diff = 1e5;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < n - 2; i++)
        {
            sum = target - nums[i];
            lo = i + 1;
            hi = n - 1;
            while (lo < hi)
            {
                if (sum == (nums[lo] + nums[hi]))
                {
                    return target;
                }
                else if (sum < (nums[lo] + nums[hi]))
                {
                    if (diff >  (nums[lo] + nums[hi] - sum))
                    {
                        ans = nums[lo] + nums[hi] + nums[i];
                        diff = nums[lo] + nums[hi] - sum;
                    }
                    hi--;
                }
                else
                {
                    if (diff > sum - (nums[lo] + nums[hi]))
                    {
                        ans = nums[lo] + nums[hi] + nums[i];
                        diff = sum - (nums[lo] + nums[hi]);
                    }
                    lo++;
                }
            }
        }
        return ans;
    }
};