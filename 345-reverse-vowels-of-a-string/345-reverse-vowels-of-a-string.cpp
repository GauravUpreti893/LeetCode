class Solution {
public:
    string reverseVowels(string s) {
        string str;
        int n = s.size();
        if (n == 1)
            return s;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U' )
            {
                str += s[i];
            }
        }
        int m = str.size();
        if (m == 1)
            return s;
        int i = 0, j = m - 1;
        char temp;
        while (i < j)
        {
            temp = str[i];
            str[i] = str[j];
            str[j] = temp;
            i++;
            j--;
        }
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U' )
            {
                s[i] = str[count];
                count++;
            }
        }
        return s;
    }
};