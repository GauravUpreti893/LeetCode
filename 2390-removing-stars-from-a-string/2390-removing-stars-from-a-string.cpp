class Solution {
public:
    string removeStars(string s) {
        int n = s.size();
        int j = 0;
        for (int i = 1; i < n; i++)
        {
            if (s[i] == '*')
            {
                j--;
                if (j < 0 && i < n - 1)
                {
                    i++;
                    j = 0;
                    s[j] = s[i];
                }
            }
            else
            {
                j++;
                s[j] = s[i];
            }
        }
        return s.substr(0, j + 1);
    }
};