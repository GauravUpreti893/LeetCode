class Solution {
public:
    int mctFromLeafValues(vector<int>& arr) {
        int n = arr.size();
        stack<int> st;
        int a, b;
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            while (!st.empty() && (st.top() <= arr[i]))
            {
                a = st.top();
                st.pop();
                if (st.empty())
                    b = 16;
                else
                    b = st.top();
                ans += a * min(b, arr[i]);
            }
            st.push(arr[i]);
        }
        int prev = 0;
        while (!st.empty())
        {
            ans += st.top()*prev;
            prev = st.top();
            st.pop();
        }
        return ans;
    }
};