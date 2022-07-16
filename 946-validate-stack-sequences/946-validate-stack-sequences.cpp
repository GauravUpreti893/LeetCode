class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        int n = pushed.size();
        int i = 0, j = 0;
        stack<int> st;
        vector<bool> ispresent(n+1,0);
        while (i < n)
        {
            if (pushed[i] != popped[j])
            {
                if (ispresent[popped[j]])
                {
                    if (st.top() == popped[j])
                    {
                        st.pop();
                        j++;
                    }
                    else
                    {
                        return false;
                    }
                }
                else
                {
                    ispresent[pushed[i]] = 1;
                    st.push(pushed[i]);
                    i++;
                }
            }
            else
            {
                ispresent[pushed[i]] = 1;
                i++;
                j++;
            }
        }
        while (j < n)
        {
            if (st.top() != popped[j])
                return false;
            st.pop();
            j++;
        }
        return true;
    }
};