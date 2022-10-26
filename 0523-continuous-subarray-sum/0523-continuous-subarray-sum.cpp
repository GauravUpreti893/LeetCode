class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        int n = nums.size();
        mp[0] = 1;
        long long sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += nums[i];
            int idx = mp[sum%k];
            if (idx && (i - idx)>=0)
                return true;
            if (!idx)
                mp[sum%k] = i + 2;
        }
        return false;
    }
};