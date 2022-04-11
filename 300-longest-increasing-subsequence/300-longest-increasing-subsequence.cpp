class Solution {
public:
    int len(vector<int> &nums, int n, int* &table)
    {
        if (table[n] == -1)
        {
            for (int i = n - 1; i > 0; i--)
            {
                if (nums[i - 1] < nums[n - 1])
                {
                    table[n] = max(table[n],len(nums,i,table) + 1);
                }
                else if (nums[i - 1] == nums[n - 1])
                {
                    table[n] = max(table[n],len(nums,i,table));
                }
                else
                {
                    table[n] = max(table[n],1);
                }
                
            }
            table[n] = max(table[n],1);
        }
        return table[n];
    }
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        int *table = new int[n + 1];
        for (int i = 1; i <= n; i++)
        {
            table[i] = -1;
        }
        table[0] = 0;
        for (int i = 1; i<= n; i++)
        {
            if (table[i] == -1)
            len(nums,i,table);
        }
        int ans = 0;
        for (int i = 1; i <= n; i++)
        {
            ans = max(table[i],ans);
            // cout<<table[i]<<" ";
        }
        return ans;
    }
};