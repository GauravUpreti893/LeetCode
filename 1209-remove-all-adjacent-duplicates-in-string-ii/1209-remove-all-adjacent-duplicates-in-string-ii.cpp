class Solution {
public:
    string removeDuplicates(string s, int k) {
        int n = s.size();
        stack<pair<char, int>> st;
        st.push({'*', 0});
        for (int i = 0; i < n; i++)
        {
            if (st.top().first == s[i] && st.top().second == (k - 1))
            {
                st.pop();
            }
            else if (st.top().first == s[i])
            {
                st.top().second++;
            }
            else
                st.push({s[i], 1});
        }
        string ans;
        int m;
        char c;
        while (!st.empty())
        {
            m = st.top().second;
            c = st.top().first;
            st.pop();
            for (int i = 0; i < m; i++)
            {
                ans += c;
            }
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};