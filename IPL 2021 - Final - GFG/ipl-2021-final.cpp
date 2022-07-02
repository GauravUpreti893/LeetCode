// { Driver Code Starts
// Initial template for C++
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// User function template for c++
class Solution {
  public:
    int findMaxLen(string s) {
        // code here
        int n = s.size();
        stack<pair<char,int>> st;
        int count = 0;
        bool flag = 0, check = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '(')
            {
                if (flag) // If preceded by ')' then flag will be true.
                {
                   st.push({')',count});
                   flag = 0;
                   count = 0;
                }
                
                st.push({s[i],-1});
            }
            else
            {
                while (!st.empty() && st.top().first != '(') // Consider this example, ((()())
                {
                    if (st.top().second == 0)
                    {
                        st.push({')',count});
                        flag = 0;
                        count = 0;
                        check = 1;
                        st.push({')',count});
                        break;
                    }
                    count += st.top().second; // To count the previous (), (()) like combinations.
                    st.pop();
                }
                if (check)
                {
                    check = 0;
                    continue;
                }
                if (!st.empty())
                {
                    count += 2;
                    st.pop();
                    flag = 1;
                }
                else
                {
                    if (count != 0)
                    st.push({')',count});
                    count = 0;
                    st.push({')',count});
                }
                
            }
        }
        if (count)
        {
            st.push({')',count});
        }
        int ans = 0;
        count = 0;
        while (!st.empty())
        {
            // cout<<st.top().first<<" "<<st.top().second<<endl;
            if (st.top().first == ')')
            {
                if (st.top().second == 0)
                {
                    ans = max(ans,count);
                    count = 0;
                }
                else
                count += st.top().second;
            }
            else
            {
                ans = max(ans,count);
                count = 0;
            }
            st.pop();
        }
        ans = max(ans, count);
        return ans;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin >> S; 
        Solution ob;
        cout << ob.findMaxLen(S) << endl;
    }
    return 0;
}
  // } Driver Code Ends