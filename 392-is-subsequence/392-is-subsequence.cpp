class Solution {
public:
    bool isSubsequence(string s, string t) {
        int n = s.size(), m = t.size(), c = 0;
        if (n == 0)
        {
            return true;
        }
        for (int i = 0; i < m; i++)
        {
            if (s[c] == t[i])
            {
                c++;
                if (c == n)
                    return true;
            }
        }
        return false;
    }
};