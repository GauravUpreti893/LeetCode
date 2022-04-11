class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        int table[n + 1];
        for (int i = 1; i <= n; i++)
        {
            table[i] = 1;
        }
        table[0] = 0;
        for (int i = 2; i <= n; i++)
        {
            for (int j = 1; j < i; j++)
            {
                if (nums[j - 1] < nums[i - 1])
                {
                    table[i] = max(table[i],table[j] + 1);
                }
            }
        }
        int ans = 1;
        for (int i = 2; i <= n; i++)
        {
            ans = max(ans,table[i]);
        }
        return ans;
    }
};