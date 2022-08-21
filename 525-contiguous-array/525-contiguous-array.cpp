class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int> mp;
        mp[0] = -1;
        int ans = 0;
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            if (nums[i])
                sum++;
            else
                sum--;
            if (mp.find(sum) == mp.end())
            {
                mp[sum] = i;
            }
            else
            {
                ans = max(ans, i - mp[sum]);
            }
        }
        return ans;
    }
};