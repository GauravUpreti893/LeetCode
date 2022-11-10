class Solution {
public:
    int countNicePairs(vector<int>& nums) {
        unordered_map<int, int> mp;
        int n = nums.size();
        int ans = 0;
        int mod = 1e9 + 7;
        for (int j = 0; j < n; j++)
        {
            int t = nums[j];
            int r = 0;
            while (t)
            {
                r = r*10 + t%10;
                t /= 10;
            }
            ans += (mp[nums[j] - r])%mod;
            ans %= mod;
            mp[nums[j] - r]++;
        }
        return ans;
    }
};