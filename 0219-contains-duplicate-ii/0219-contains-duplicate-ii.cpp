class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        if (k == 0)
            return false;
        int n = nums.size();
        unordered_map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            if (mp.find(nums[i]) != mp.end() && abs(mp[nums[i]] - i) <= k)
                return true;
            mp[nums[i]] = i;
        }
        return false;
    }
};