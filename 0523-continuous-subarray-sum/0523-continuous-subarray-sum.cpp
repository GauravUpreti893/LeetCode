class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<long long, int> mp;
        mp[0] = 1;
        long long sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += nums[i];
            if (sum % k == 0 && i)
                return true;
            int j = 0;
            while (sum - k*j >= 0)
            {
                if (mp[sum - k*j] && (i - mp[sum - k*j]) >= 0)
                    return true;
                j++;
            }
            if (mp[sum] == 0)
            mp[sum] = i + 2;
        }
        return false;
    }
};