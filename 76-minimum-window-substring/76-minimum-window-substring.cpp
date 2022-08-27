class Solution {
public:
    string minWindow(string s, string t) {
        if (s == "" || t == "")
            return "";
        int n = s.size(), m = t.size();
        if (m > n)
            return "";
        vector<int> remaining(58, 0);
        int required = m;
        for (int i = 0; i < m; i++)
        {
            remaining[t[i] - 'A']++;
        }
        int start = 0, i = 0, mn = INT_MAX, p1 = 0, p2 = -1;
        while (i < n)
        {
            if (remaining[s[i] - 'A'] > 0)
            {
                required--;
                remaining[s[i] - 'A']--;
                if (!required)
                {
                    cout<<i<<endl;
                    while (start <= i)
                    {
                        // cout<<remaining[s[start] - 'A']<<" ";
                        remaining[s[start] - 'A']++;
                        // cout<<remaining[s[start] - 'A']<<endl;
                        if (remaining[s[start] - 'A'] > 0)
                        {
                            required++;
                            start++;
                            break;
                        }
                        start++;
                    }
                    if (mn > i - start + 2)
                    {
                        mn = i - start + 2;
                        p1 = start - 1;
                        p2 = i;
                        cout<<p1<<" "<<p2<<endl;
                    }
                    
                }
            }
            else
            {
                remaining[s[i] - 'A']--;
            }
            i++;
        }
        string ans;
        for (int i = p1; i <= p2; i++)
        {
            ans += s[i];
        }
        return ans;
    }
};