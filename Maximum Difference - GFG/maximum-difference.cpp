// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
    public:
    /*You are required to complete this method */
    int findMaxDiff(int A[], int n)
    {
      //Your code here
      vector<int> left(n), right(n);
      stack<int> st;
        bool flag;
        for (int i = n - 1; i >= 0; i--)
        {
            flag = 1;
            while (!st.empty())
            {
                if (st.top() >= A[i])
                st.pop();
                else
                {
                    right[i] = st.top();
                    flag = 0;
                    break;
                }
            }
            st.push(A[i]);
            if (flag)
            {
                right[i] = 0;
            }
        }
        stack<int> s;
        for (int i = 0; i < n; i++)
        {
            flag = 1;
            while (!s.empty())
            {
                if (s.top() >= A[i])
                s.pop();
                else
                {
                    left[i] = s.top();
                    flag = 0;
                    break;
                }
            }
            s.push(A[i]);
            if (flag)
            {
                left[i] = 0;
            }
        }
        int mx = 0;
        for (int i = 0; i < n;i++)
        {
            mx = max(mx, abs(left[i] - right[i]));
        }
        return mx;
    }
};

// { Driver Code Starts.
int main()
{
   int t;
   cin>>t;
   while(t--)
   {
   	int n;
   	cin>>n;
   	int a[n];
   	for(int i=0;i<n;i++)
   	cin>>a[i];
   	Solution ob;
   	cout<<ob.findMaxDiff(a,n)<<endl;
   }
    return 0;
}


  // } Driver Code Ends