class Solution {
public:
    string removeKdigits(string num, int k) {
        string ans;
        int n = num.size(), count = 0;
        int *arr = new int[n];
        for (int i = 0; i < n; i++)
        {
            arr[i] = 1; // If remained 1, then it will be present in the ans string otherwise it will note be.
        }
        stack<pair<int,int>> st;
        bool flag = 0;
        for (int i = 0; i < n; i++)
        {
            if (st.empty() || num[i] >= st.top().first)
            {
                st.push({num[i],i});
            }
            else
            {
                while (!st.empty() && num[i] < st.top().first)
                {
                    arr[st.top().second] = 0;
                    st.pop();
                    count++;
                    if (count == k)
                    {
                        flag = 1;
                        break;
                    }
                }
                st.push({num[i],i});
                if (flag)
                    break;
            }
        }
        while (count != k) // eg 12345, then we have to remove from top of stack.
        {
            arr[st.top().second] = 0;
            st.pop();
            count++;
        }
        int i = 0;
        while (i < n) // removing leading 0. e.g. in Example 2
        {
            if (arr[i])
            {
                if (num[i] != '0')
                    break;
            }
            i++;
        }
        for (; i < n; i++)
        {
            if (arr[i])
            {
                ans += num[i];
            }
        }
        if (ans == "")
            ans = "0";
        return ans;
    }
};