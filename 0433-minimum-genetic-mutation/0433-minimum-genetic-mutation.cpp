class Solution {
public:
    int minMutation(string start, string end, vector<string>& bank) {
        unordered_map<string, int> mp;
        int n = bank.size();
        for (int i = 0; i < n; i++)
            mp[bank[i]] = 1;
        queue<pair<string, int>> q;
        q.push({start, 0});
        string s;
        int l;
        vector<char> v{'A', 'C', 'G', 'T'};
        char t;
        mp.erase(start);
        while (!q.empty())
        {
            s = q.front().first;
            l = q.front().second;
            if (s == end)
            {
                return l;
            }
            q.pop();
            for (int i = 0; i < 8; i++)
            {
                t = s[i];
                for (int j = 0; j < 4; j++)
                {
                    s[i] = v[j];
                    if (mp[s])
                    {
                        q.push({s, l + 1});
                        mp.erase(s);
                    }
                }
                s[i] = t;
            }
        }
        return -1;
    }
};