class Solution {
public:
    int minimumAverageDifference(vector<int>& nums) {
        int n = nums.size();
        long long totalsum = 0;
        for (int i = 0; i < n; i++)
        {
            totalsum += nums[i];
        }
        long long sum = 0;
        int ans = 0, mndiff = 1e5, diff;
        for (int i = 0; i < n - 1; i++)
        {
            sum += nums[i];
            diff = abs(sum/(i + 1) - (totalsum - sum)/(n - i - 1));
            if (diff < mndiff)
            {
                mndiff = diff;
                ans = i;
            }
        }
        diff = totalsum/n;
        if (diff < mndiff)
        {
            mndiff = diff;
            ans = n - 1;
        }
        return ans;
    }
};