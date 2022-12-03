class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> ans(k);
        int n = nums.size();
        unordered_map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            mp[nums[i]]++;
        }
        vector<pair<int, int>> freq;
        for (auto it = mp.begin(); it != mp.end(); it++)
        {
            freq.push_back({it->second, it->first});
        }
        sort(freq.begin(), freq.end(), greater<pair<int, int>>());
        for (int i = 0; i < k; i++)
        {
            ans[i] = freq[i].second;
        }
        return ans;
    }
};