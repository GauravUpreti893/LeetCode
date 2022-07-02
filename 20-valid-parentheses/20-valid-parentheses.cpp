class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        int n = s.size();
        string temp;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '(' || s[i] == '[' || s[i] == '{')
            {
                st.push(s[i]);
            }
            else
            {
                if (st.empty())
                {
                    return false; //means there is a close bracket without a open bracket.
                }
                temp = st.top();
                temp += s[i];
                if (temp == "()" || temp == "[]" || temp == "{}")
                {
                    st.pop();
                }
                else
                {
                    return false; // wrong combination of opening and closing bracket.
                }
            }
        }
        if (st.empty())
            return true;
        else 
            return false; // Means some opening brackets are there without there closing bracket.
    }
};