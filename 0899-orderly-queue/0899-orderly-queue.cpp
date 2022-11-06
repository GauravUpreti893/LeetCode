class Solution {
public:
    string orderlyQueue(string s, int k) {
        if (k == 1)
        {
            char mn = s[0];
            int n = s.size();
            for (int i = 1; i < n; i++)
            {
               mn = min(mn, s[i]);
            }
            string ans = s;
            for (int i = 0; i < n; i++)
            {
                if (s[i] == mn)
                {
                    string str;
                    for (int j = i; j < n; j++)
                        str += s[j];
                    for (int j = 0; j < i; j++)
                        str += s[j];
                    if (ans.compare(str) > 0)
                        ans = str;
                }
            }
            return ans;
        }
        sort(s.begin(), s.end());
        return s;
    }
};