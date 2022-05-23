class Solution {
public:
    int sumSubseqWidths(vector<int>& nums) {
        long long int ans = 0;
        long long mod = 1e9 + 7;
        sort(nums.begin(),nums.end());
        int n = nums.size();
        long long p = 1;
        for (int i = 0; i < n; i++)
        {
            ans += ((nums[i] - nums[n - 1 - i])*p)%mod;
            p *= 2;
            p = p %mod;
            ans = ans %mod;
        }
        return ans;
    }
};