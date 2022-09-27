class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        stack<int> st;
        int n = s.size();
        cout<<n<<endl;
        for (int i = n - 1; i >= 0; i--)
        {
            if (s[i] == c)
            st.push(i);
        }
        vector<int> ans(n);
        int idx = -n;
        for (int i = 0; i < n; i++)
        {
            if (!st.empty())
            ans[i] = min(st.top() - i, i - idx);
            else
                ans[i] = i - idx;
            if (s[i] == c)
            {
                st.pop();
                idx = i;
            }
        }
        return ans;
    }
};