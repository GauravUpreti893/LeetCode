class Solution {
public:
    string orderlyQueue(string s, int k) {
        if (k == 1)
        {
            int n = s.size();
            string ans = s;
            for (int i = 0; i < n; i++)
            {
                s = s.substr(1) + s[0];
                if (s.compare(ans) < 0)
                    ans = s;
            }
            return ans;
        }
        sort(s.begin(), s.end());
        return s;
    }
};