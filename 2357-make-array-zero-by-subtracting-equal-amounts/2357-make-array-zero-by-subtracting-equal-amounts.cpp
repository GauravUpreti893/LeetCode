class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        unordered_map<int, int> mp;
        int n = nums.size();
        int diff = 0;
        for (int i = 0; i < n; i++)
        {
            mp[nums[i]] = 1;
            if (!nums[i])
            {
                diff = 1;
            }
        }
        return mp.size() - diff;
    }
};