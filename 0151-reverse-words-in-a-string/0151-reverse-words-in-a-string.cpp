class Solution {
public:
    string reverseWords(string s) {
        int n = s.size();
        string ans;
        int i = 0;
        while (i < n && s[i] == ' ')
            i++;
        string str;
        while (true)
        {
            str.clear();
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
            if (i == n)
                break;
            ans = ' ' + ans;
        }
        return ans;
    }
};