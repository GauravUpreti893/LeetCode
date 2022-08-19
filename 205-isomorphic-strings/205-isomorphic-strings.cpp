class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int n = s.size(), m = t.size();
        if (n != m)
            return false;
        unordered_map<char, char> replace;
        unordered_map<char, bool> isused;
        
        for (int i = 0; i < n; i++)
        {
            if (replace.find(t[i]) != replace.end())
            {
                t[i] = replace[t[i]];
                if (s[i] != t[i])
                    return false;
            }
            else
            {
                // if (s[i] != t[i])
                // {
                    if (isused[s[i]])
                        return false;
                    isused[s[i]] = 1;
                // }
                replace[t[i]] = s[i];
            }
        }
        return true;
    }
};