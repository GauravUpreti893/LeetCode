class Solution {
public:
    string minWindow(string s, string t) {
        int n = s.size(), m = t.size();
        if (m > n)
            return "";
        vector<int> freq(58, 0);
        for (int i = 0; i < m; i++)
        {
            freq[t[i] - 'A']++;
        }
        int st = 0, p1 = 0, p2 = -1, l = 1e5 + 1;
        for (int i = 0; i < n; i++)
        {
            freq[s[i] - 'A']--;
            bool flag = 1;
            for (int j = 0; j < 58; j++)
            {
                if (freq[j] > 0)
                {
                    flag = 0;
                    break;
                }
            }
            if (flag)
            {
                for (int j = st; j <= i; j++)
                {
                    freq[s[j] - 'A']++;
                    if (freq[s[j] - 'A'] > 0)
                    {
                        freq[s[j] - 'A']--;
                        break;
                    }
                    st++;
                }
                if (l > (i - st + 1))
                {
                    l = i - st + 1;
                    p1 = st;
                    p2 = i;
                }
            }
            
        }
        
        string ans;
        for (int i = p1; i <= p2; i++)
            ans += s[i];
        return ans;
    }
};