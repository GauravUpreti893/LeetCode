bool compare(string &a, string &b)
{
    if (a.size() == b.size())
        return (a.compare(b) < 0);
    return a.size() > b.size();
}
class Solution {
public:
     bool isSubsequence(string& s, string& t) {
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
    int findLUSlength(vector<string>& strs) {
        int n = strs.size();
        vector<int> unique;
        int s = 0;
        sort(strs.begin(), strs.end(), compare);
        int i = 0;
        for (; i < n - 1; i++)
        {
            if (strs[i] != strs[i + 1])
            {
                bool flag = 1;
                for (int j = 0; j < s; j++)
                {
                   if (isSubsequence(strs[i], strs[unique[j]]))
                   {
                       flag = 0;
                       break;
                   }
                }
                if (flag)
                {
                    return strs[i].size();
                }
                unique.push_back(i);
                s++;
            }
            else
            {
                while ((i < n - 1) && strs[i] == strs[i + 1])
                {
                    i++;
                }
                unique.push_back(i);
                s++;
            }
        }
        if (i == (n -1))
        {
            bool flag = 1;
            for (int j = 0; j < s; j++)
            {
               if (isSubsequence(strs[i], strs[unique[j]]))
               {
                   flag = 0;
                   break;
               }
            }
            if (flag)
            {
                return strs[i].size();
            }
        }
        return -1;
    }
};