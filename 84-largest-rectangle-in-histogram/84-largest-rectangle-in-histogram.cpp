class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        vector<int> left(n), right(n);
      stack<pair<int, int>> st;
        bool flag;
        for (int i = n - 1; i >= 0; i--)
        {
            flag = 1;
            while (!st.empty())
            {
                if (st.top().first >= heights[i])
                st.pop();
                else
                {
                    right[i] = st.top().second - 1;
                    flag = 0;
                    break;
                }
            }
            st.push({heights[i],i});
            if (flag)
            {
                right[i] = n - 1;
            }
        }
        stack<pair<int, int>> s;
        for (int i = 0; i < n; i++)
        {
            flag = 1;
            while (!s.empty())
            {
                if (s.top().first >= heights[i])
                s.pop();
                else
                {
                    left[i] = s.top().second + 1;
                    flag = 0;
                    break;
                }
            }
            s.push({heights[i],i});
            if (flag)
            {
                left[i] = 0;
            }
        }
        int  mx = 0, area;
        for (int i = 0; i < n;i++)
        {
            area = heights[i]*(right[i] - left[i] + 1);
            mx = max(mx, area);
        }
        return mx;
    }
};