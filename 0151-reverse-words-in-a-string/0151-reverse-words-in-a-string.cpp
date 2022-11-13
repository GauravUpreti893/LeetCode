class Solution {
public:
    string reverseWords(string s) {
        int n = s.size();
        string ans;
        int i = 0;
        while (i < n && s[i] == ' ')
            i++;
        while (i < n)
        {
            string str;
            while (i < n && s[i] != ' ')
            {
                str += s[i];
                i++;
            }
            ans = str + ans;
            while (i < n && s[i] == ' ')
            {
                i++;
            }
            if (i != n)
                ans = ' ' + ans;
        }
        return ans;
    }
};