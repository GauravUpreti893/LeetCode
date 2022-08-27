class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> mp;
        int n = strs.size(), m;
        for (int i = 0; i < n; i++)
        {
            vector<int> freq(26, 0);
            m = strs[i].size();
            for (int j = 0; j < m; j++)
            {
                freq[strs[i][j] - 'a']++;
            }
            string s;
            char c;
            for (int j = 0; j < 26; j++)
            {
                c = freq[j] + '0';
                s += c;
            }
            mp[s].push_back(strs[i]);
        }
        vector<vector<string>> ans;
        for (auto it = mp.begin(); it != mp.end(); it++)
        {
            ans.push_back(it->second);
        }
        return ans;
    }
};