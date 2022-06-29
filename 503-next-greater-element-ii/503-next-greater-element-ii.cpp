class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n, -1);
        stack<int> st;
        bool flag;
        int i;
        for (int j = 2*n - 1; j >= 0; j--)
        {
            flag = 1;
            i = j%n;
            while (!st.empty())
            {
                if (st.top() <= nums[i])
                {
                    st.pop();
                }
                else
                {
                    ans[i] = st.top();
                    flag = 0;
                    break;
                }
            }
            st.push(nums[i]);
            if (flag)
            {
               ans[i] = -1;
            }
        }
        return ans;
    }
};