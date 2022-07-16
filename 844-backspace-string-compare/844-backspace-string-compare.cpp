class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> st1, st2;
        int n1 = s.size(), n2 = t.size();
        for (int i = 0; i < n1; i++)
        {
            if (s[i] == '#' && !st1.empty())
            {
                st1.pop();
            }
            else if (s[i] != '#')
            {
                st1.push(s[i]);
            }
        }
        for (int i = 0; i < n2; i++)
        {
            if (t[i] == '#' && !st2.empty())
            {
                st2.pop();
            }
            else if (t[i] != '#')
            {
                st2.push(t[i]);
            }
        }
        return (st1 == st2);
        
    }
};