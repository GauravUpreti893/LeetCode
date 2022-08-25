class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int n = s.size(), m = p.size();
        vector<int> ans;
        if (m > n)
            return ans;
        vector<int> fs(26, 0), fp(26, 0);
        for (int i = 0; i < m; i++)
        {
            fs[s[i] - 'a']++;
            fp[p[i] - 'a']++;
        }
        bool flag = 1;
        for (int i = 0; i < 26; i++)
        {
            if (fs[i] != fp[i])
            {
                flag = 0;
                break;
            }
        }
        if (flag)
        {
            ans.push_back(0);
        }
        for (int i = 1; i <= n - m; i++)
        {
            fs[s[i - 1] - 'a']--;
            fs[s[i + m - 1] - 'a']++;
            flag = 1;
            for (int i = 0; i < 26; i++)
            {
                if (fs[i] != fp[i])
                {
                    flag = 0;
                    break;
                }
            }
            if (flag)
            {
                ans.push_back(i);
            }
        }
        return ans;
    }
};