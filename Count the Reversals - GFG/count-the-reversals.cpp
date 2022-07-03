// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int countRev (string s);
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        cout << countRev (s) << '\n';
    }
}

// Contributed By: Pranay Bansal// } Driver Code Ends



int countRev (string s)
{
    // your code here
    int n = s.size();
    stack<char> st;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '{')
        {
            st.push('{');
        }
        else
        {
            if (!st.empty() && st.top() == '{')
            {
                st.pop();
            }
            else
            {
                st.push('}');
            }
        }
    }
    int ans = 0, count = 0;
    if (st.size()%2)
    return -1;
    while (!st.empty())
    {
        if (st.top() == '{')
        {
            count++;
            st.pop();
        }
        else
        {
            break;
        }
    }
    if (st.empty())
    {
        if (count % 2)
        {
            return -1;
        }
        else
        {
            return count/2;
        }
    }
    ans = count;
    // cout<<ans<<endl;
    if (count == 0)
    {
        count = st.size();
        if (count % 2)
        {
            return -1;
        }
        else
        {
            return count/2;
        }
    }
    count = st.size();
    if (ans%2)
    {
        return ans/2 + count/2 + 2;
    }
    else
    {
        return ans/2 + count/2;
    }
}