class Solution {
public:
    vector<int> replaceNonCoprimes(vector<int>& nums) {
        stack<int> st;
        int n = nums.size();
        int idx = 0;
        long long a, b, d;
        for (int i = 0; i < n; i++)
        {
            b = nums[i];
            if (st.empty())
                a = 1;
            else
                a = st.top();
            while ( __gcd(a, b) != 1)
            {
                a = st.top();
                d = __gcd(a, b);
                b = a*b/d;
                st.pop();
                if (st.empty())
                a = 1;
                else
                a = st.top();
            }
            st.push(b);
        }
        int m = st.size();
        vector<int> ans(m);
        for (int i = m - 1; i >= 0; i--)
        {
            ans[i] = st.top();
            st.pop();
        }
        return ans;
    }
};