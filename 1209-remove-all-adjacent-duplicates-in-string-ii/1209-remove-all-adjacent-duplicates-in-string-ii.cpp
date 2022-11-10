class Solution {
public:
    string removeDuplicates(string s, int k) {
        int n = s.size();
        int j = 0;
        vector<int> count(n, 1);
        for (int i = 1; i < n; i++)
        {
            if (s[i] == s[j])
            {
                if (count[j] == (k - 1))
                {
                    j -= (k - 1);
                    if (j < 0 && i < n - 1)
                    {
                        i++;
                        j = 0;
                        s[j] = s[i];
                        count[j] = 1;
                    }
                }
                else
                {
                    count[j + 1] = count[j] + 1;
                    j++;
                    s[j] = s[i];
                }
            }
            else
            {
                j++;
                count[j] = 1;
                s[j] = s[i];
            }
        }
        return s.substr(0, j + 1);
    }
};