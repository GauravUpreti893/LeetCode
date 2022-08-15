class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int ans = 0;
        int n = nums.size();
        unordered_map<int,int> mp;
        for (int i = 0; i < n; i++)
        {
            mp[nums[i]] = 1;
        }
        int v, sum;
        for (int i = 0; i < n; i++)
        {
            if (!mp[nums[i]])
                continue;
            sum = 1;
            mp[nums[i]] = 0; 
            v = nums[i] - 1;
            while (1)
            {
                if (!mp[v])
                {
                    break;
                }
                mp[v] = 0;
                v--;
                sum++;
            }
            v = nums[i] + 1;
            while (1)
            {
                if (!mp[v])
                {
                    break;
                }
                mp[v] = 0;
                v++;
                sum++;
            }
            ans = max(ans, sum);
        }
        return ans;
    }
};