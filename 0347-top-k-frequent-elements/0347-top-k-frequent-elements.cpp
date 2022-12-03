class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> ans;
        int n = nums.size();
        unordered_map<int, int> mp;
        int mx = 0;
        for (int i = 0; i < n; i++)
        {
            mp[nums[i]]++;
            mx = max(mx, mp[nums[i]]);
        }
        vector<vector<int>> freq(mx + 1);
        for (auto it = mp.begin(); it != mp.end(); it++)
        {
            freq[it->second].push_back(it->first);
        }
        for (int i = mx; i >= 0; i--)
        {
            int m = freq[i].size();
            for (int j = 0; j < m; j++)
            {
                ans.push_back(freq[i][j]);
                k--;
                if (!k)
                    return ans;
            }
        }
        return ans;
    }
};