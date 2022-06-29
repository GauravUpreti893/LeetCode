class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        vector<int> ans(n);
        stack<pair<int,int>> st; //For storing temperature and its index;
        bool flag; 
        for (int i = n - 1;i >= 0; i--)
        {
            flag = 1; // If remain unchanged then current temperature is highest among following days. and we will set ans[i] = 0
            while (!st.empty())
            {
                if (st.top().first <= temperatures[i])
                {
                    st.pop(); //As we have to find higher temperature. And we will never gonna need this, as if   any i, temperature is greater than current i, then it is also greater than current top, so need to keep its value now.
                }
                else
                {
                    ans[i] = st.top().second - i;
                    flag = 0;
                    break;
                }
            }
            st.push({temperatures[i],i});
            if (flag) //unchanged, i.e no else condition executed
            {
                ans[i] = 0;
            }
        }
        return ans;
    }
};