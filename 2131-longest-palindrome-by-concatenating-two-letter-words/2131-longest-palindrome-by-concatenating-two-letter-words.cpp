class Solution {
public:
    int longestPalindrome(vector<string>& words) {
        int n = words.size();
        bool flag = true;
        int ans = 0;
        unordered_map<string, int> mp;
        for (int i = 0; i < n; i++)
        {
            mp[words[i]]++;
        }
        string s;
        int l;
        for (auto it = mp.begin(); it != mp.end(); it++)
        {
            s = it->first;
            l = it->second;
            if (s[0] == s[1])
            {
                if (l % 2)
                {
                    if (flag)
                    {
                        ans += (l)*2;
                        flag = false;
                    }
                    else
                    {
                        ans += (l - 1)*2;
                    }
                }
                else
                    ans += (l)*2;
            }
            else
            {
                reverse(s.begin(), s.end());
                int l1 = 0;
                if (mp.find(s) != mp.end())
                    l1 = mp[s];
                ans += min(l, l1)*2;
            }
        }
        return ans;
    }
};