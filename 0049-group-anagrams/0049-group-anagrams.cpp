class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        map<vector<int>, vector<string>> mp;
        int n = strs.size();
        for (int i = 0; i < n; i++)
        {
            vector<int> freq(26, 0);
            int m = strs[i].size();
            for (int j = 0; j < m; j++)
            {
                freq[strs[i][j] - 'a']++;
            }
            mp[freq].push_back(strs[i]);
        }
        for (auto it = mp.begin(); it != mp.end(); it++)
        {
            ans.push_back(it->second);
        }
        return ans;
    }
};