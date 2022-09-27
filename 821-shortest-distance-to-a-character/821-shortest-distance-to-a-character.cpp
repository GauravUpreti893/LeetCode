class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        int n = s.size();
        vector<int> ans(n);
        int idx = -n;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == c)
            {
                idx = i;
            }
            ans[i] = i - idx;
        }
        for (int j = idx - 1; j >= 0; j--)
        {
            if (s[j] == c)
            {
                idx = j;
            }
            ans[j] = min(ans[j], idx - j);
        }
        return ans;
    }
};