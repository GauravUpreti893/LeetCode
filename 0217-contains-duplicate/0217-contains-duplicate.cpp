class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int> mp;
        int n = nums.size();
        for (int i = 0; i < n; i++)
        {
            if (mp[nums[i]])
                return true;
            mp[nums[i]] = 1;
        }
        return false;
    }
};