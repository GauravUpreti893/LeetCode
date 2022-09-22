class Solution {
public:
    string reverseWords(string s) {
        int i = 0, n = s.size(), x = 0, j;
        while (i < n)
        {
            while (s[x] != '\0' && s[x] != ' ')
                x++;
            j = x - 1;
            x++;
            while (i < j)
            {
                swap(s[i++], s[j--]);
            }
            i = x;
        }
        return s;
    }
};