class Solution {
public:
    string orderlyQueue(string s, int k) {
        if (k == 1)
        {
            string s1 = s;
            int n = s.size();
            for (int i = 1; i < n; i++)
            {
                s = s.substr(1) + s[0];
                if (s.compare(s1)<0)
                {
                    s1 = s;
                }
            }
            return s1;
        }
        else
        {
            sort(s.begin(),s.end());
            return s;
        }
        return s;
    }
};