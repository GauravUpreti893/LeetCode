class Solution {
public:
    string reverseWords(string& s) {
        stack<string> st;
        int n = s.size();
        string str;
        int i = 0;
        while (i < n && s[i] == ' ')
        {
            i++;
        }
        while (i < n)
        {
            while (i < n && s[i] != ' ')
            {
                str += s[i];
                i++;
            }
            st.push(str);
            str.clear();
            while (i < n && s[i] == ' ')
            {
                i++;
            }
        }
        string ans;
        while (st.size() != 1)
        {
            ans += st.top();
            ans += ' ';
            st.pop();
        }
        ans += st.top();
        return ans;
    }
};