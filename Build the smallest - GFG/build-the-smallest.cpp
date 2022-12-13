//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
string buildLowestNumber(string num, int k);
// Driver program to test above function
int main()
{
    int t,n;
    string str;
    cin>>t;
    while(t--)
    {
    cin>>n;
    cin>>str;
    cout << buildLowestNumber(str, n)<<endl;
    }
    return 0;
}

// } Driver Code Ends


string buildLowestNumber(string num, int k)
{
    //code here.
    if (!k)
    return num;
    stack<char> st;
    int n = num.size(), idx = 0;
    bool flag = false;
    for (int i = 0; i < n; i++)
    {
        while (!st.empty() && st.top() > num[i])
        {
            st.pop();
            k--;
            if (!k)
            {
                flag = true;
                idx = i;
                break;
            }
        }
        if (flag)
        break;
        st.push(num[i]);
    }
    string ans, res;
    while (!st.empty())
    {
        ans = st.top() + ans;
        st.pop();
    }
    if (flag)
    {
        for (int i = idx; i < n; i++)
        {
            ans += num[i];
        }
    }
    int i = 0, m = ans.size();
    while (k)
    {
        k--;
        m--;
    }
    while (i < m && ans[i] == '0')
    i++;
    if (i == m)
    return "0";
    for (; i < m; i++)
    res += ans[i];
    return res;
}