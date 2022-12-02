class Solution {
public:
    bool closeStrings(string word1, string word2) {
        int n = word1.size(), m = word2.size();
        if (n != m)
            return false;
        unordered_map<char,int> mp1, mp2;
        for (int i = 0; i < n; i++)
        {
            mp1[word1[i]]++;
            mp2[word2[i]]++;
        }
        for (int i = 0; i < 26; i++)
        {
            if ((mp1['a' + i] && !mp2['a' + i]) || (!mp1['a' + i]) && mp2['a' + i])
                return false;
        }
        unordered_map<int ,int> mp;
        for (auto it = mp2.begin(); it != mp2.end(); it++)
        {
            mp[it->second]++;
        }
        for (auto it = mp1.begin(); it != mp1.end(); it++)
        {
            if (mp.find(it->second) == mp.end())
                return false;
            mp[it->second]--;
            if (!mp[it->second])
            mp.erase(it->second);
        }
        return true;
    }
};