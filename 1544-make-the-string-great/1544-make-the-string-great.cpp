class Solution {
public:
    string makeGood(string s) {
        int n = s.size();
        int j = 1;
        for (int i = 1; i < n; i++)
        {
            if (j > 0 && abs(s[i] - s[j - 1]) == 32)
            {
                j--;
            }
            else
            {
                s[j++] = s[i];
            }
        }
        return s.substr(0, j);
    }
};