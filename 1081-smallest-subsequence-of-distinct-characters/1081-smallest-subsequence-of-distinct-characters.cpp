class Solution {
public:
    string smallestSubsequence(string s) {
        int n = s.size();
        string ans;
        stack<char> st;
        vector<int> ispresent(26,0), freq(26,0);
        for (int i = 0; i < n; i++)
        {
            freq[s[i] - 97]++;
        }
        for (int i = 0; i < n;i++)
        {
            freq[s[i] - 97]--;
            if (ispresent[s[i] - 97])
                continue;
            while (!st.empty() && st.top() > s[i])
            {
                if (!freq[st.top() - 97])
                {
                    break;
                }
                ispresent[st.top() - 97] = 0;
                st.pop();
                
            }
            st.push(s[i]);
            ispresent[s[i] - 97] = 1;
        }
        while (!st.empty())
        {
            ans = st.top() + ans;
            st.pop();
        }
        return ans;
    }
};