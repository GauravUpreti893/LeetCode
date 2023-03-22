//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution{   
public:
    long long solve(int X,int Y,string S){
      //code here
        long long ans = 0;
        if (X >= Y)
        {
            stack<char> st;
            int n = S.size();
            for (int i = 0; i < n; i++)
            {
                if (S[i] == 'r')
                {
                    if (!st.empty() && st.top() == 'p')
                    {
                        ans += X;
                        st.pop();
                    }
                    else
                    st.push('r');
                }
                else
                st.push(S[i]);
            }
            string str;
            while (!st.empty())
            {
                str = st.top() + str;
                st.pop();
            }
            n = str.size();
            for (int i = 0; i < n; i++)
            {
                if (str[i] == 'p')
                {
                    if (!st.empty() && st.top() == 'r')
                    {
                        ans += Y;
                        st.pop();
                    }
                    else
                    st.push('p');
                }
                else
                st.push(str[i]);
            }
            return ans;
        }
        else
        {
            stack<char> st;
            int n = S.size();
            for (int i = 0; i < n; i++)
            {
                if (S[i] == 'p')
                {
                    if (!st.empty() && st.top() == 'r')
                    {
                        ans += Y;
                        st.pop();
                    }
                    else
                    st.push('p');
                }
                else
                st.push(S[i]);
            }
            string str;
            while (!st.empty())
            {
                str = st.top() + str;
                st.pop();
            }
            n = str.size();
            for (int i = 0; i < n; i++)
            {
                if (str[i] == 'r')
                {
                    if (!st.empty() && st.top() == 'p')
                    {
                        ans += X;
                        st.pop();
                    }
                    else
                    st.push('r');
                }
                else
                st.push(str[i]);
            }
            return ans;
        }
    }
};

//{ Driver Code Starts.
signed main()
{
  int t;
  cin>>t;
  while(t--)
  {
      int X,Y;
      cin>>X>>Y;
      string S;
      cin>>S;
      Solution obj;
      long long answer=obj.solve(X,Y,S);
      cout<<answer<<endl;
  }
}
// } Driver Code Ends