class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans(2);
        unordered_map<int, int> mp;
        int n = nums.size();
        for (int i = 0; i < n; i++)
            mp[nums[i]] = i + 1;
        for (int i = 0; i < n; i++)
        {
            if (target % 2 == 0 && nums[i] == target/2)
            {
                if (mp[nums[i]] != (i + 1))
                {
                    ans[0] = i;
                    ans[1] = mp[nums[i]] - 1;
                    return ans;
                }
            }
            else
            {
                if (mp[target - nums[i]])
                {
                    ans[0] = i;
                    ans[1] = mp[target- nums[i]] - 1;
                    return ans;
                }
            }
        }
        return ans;
    }
};