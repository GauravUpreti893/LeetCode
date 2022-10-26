class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<long long, int> mp;
        // for (int i = 0; i < n - 1; i++)
        // {
        //     if (nums[i] == 0 && nums[i + 1] == 0)
        //         return true;
        // }
        long long sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += nums[i];
            if (!sum)
            {
                if (i != 0)
                    return true;
            }
            else
            {
                int j = 0;
                if (sum % k == 0 && i)
                    return true;
                while (sum - k*j >= 0)
                {
                    if (mp[sum - k*j] && (i - mp[sum - k*j]))
                        return true;
                    j++;
                }
            }
            if (mp[sum] == 0)
            mp[sum] = i + 1;
        }
        return false;
    }
};