class Solution {
public:
    int countNicePairs(vector<int>& nums) {
        unordered_map<int, int> mp;
        int n = nums.size();
        int ans = 0;
        int mod = 1e9 + 7;
        for (int j = 0; j < n; j++)
        {
            string rev = to_string(nums[j]);
            reverse(rev.begin(), rev.end());
            int i = 0, m = rev.size();
            while (i < m && rev[i] == '0')
            {
                i++;
            }
            int r = 0;
            for (; i < m; i++)
            {
                r = r*10 + rev[i] - '0';
            }
            ans += (mp[nums[j] - r])%mod;
            ans %= mod;
            mp[nums[j] - r]++;
        }
        return ans;
    }
};