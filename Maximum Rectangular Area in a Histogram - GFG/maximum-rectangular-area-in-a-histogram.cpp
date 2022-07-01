// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to find largest rectangular area possible in a given histogram.
    long long getMaxArea(long long arr[], int n)
    {
        // Your code here
        vector<int> left(n), right(n);
      stack<pair<long long int, int>> st;
        bool flag;
        for (int i = n - 1; i >= 0; i--)
        {
            flag = 1;
            while (!st.empty())
            {
                if (st.top().first >= arr[i])
                st.pop();
                else
                {
                    right[i] = st.top().second - 1;
                    flag = 0;
                    break;
                }
            }
            st.push({arr[i],i});
            if (flag)
            {
                right[i] = n - 1;
            }
        }
        stack<pair<long long int, int>> s;
        for (int i = 0; i < n; i++)
        {
            flag = 1;
            while (!s.empty())
            {
                if (s.top().first >= arr[i])
                s.pop();
                else
                {
                    left[i] = s.top().second + 1;
                    flag = 0;
                    break;
                }
            }
            s.push({arr[i],i});
            if (flag)
            {
                left[i] = 0;
            }
        }
        long long mx = 0, area;
        for (int i = 0; i < n;i++)
        {
            area = arr[i]*(right[i] - left[i] + 1);
            mx = max(mx, area);
        }
        return mx;
    }
};


// { Driver Code Starts.

int main()
 {
    long long t;

    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        
        long long arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        Solution ob;
        cout<<ob.getMaxArea(arr, n)<<endl;
    
    }
	return 0;
}
  // } Driver Code Ends