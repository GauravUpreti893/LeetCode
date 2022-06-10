class Solution {
public:
    int arrayNesting(vector<int>& nums) {
        int ans = 0;
        int n = nums.size();
        int count, v;
        vector<int> table(n,0);
        for (int i = 0; i < n; i++)
        {
            count = 0;
            if (nums[i] == i || table[i])
            {
                ans = max(ans,1);
                continue;
            }
            table[i] = 1;
            v = nums[i];
            while (count < n)
            {
                count++;
                table[v] = 1;
                if (nums[v] == v || nums[v] == nums[i])
                {
                    ans = max(ans,count);
                    break;
                }
                v = nums[v];
            }
            ans = max(ans,count);
        }
        return ans;
    }
};