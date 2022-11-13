class Solution {
public:
    string reverseWords(string S) {
        stack <string> s;
        string str;
        int i = 0;
        while (S[i] == ' ')
            i++;
        for (; S[i] != '\0'; i++)
        {
            if (S[i] == ' ')
            {
                s.push(str);
                str.clear();
                i++;
                while (S[i] != '\0' && S[i] == ' ')
                    i++;
                i--;
            }
            else
            {
                str += S[i];
            }
        }
        if (str.size() != 0)
        s.push(str);
        string ans;
        while (s.size() != 1)
        {
            ans += s.top();
            s.pop();
            ans += ' ';
        }
        ans += s.top();
        s.pop();
        return ans;
    }
};