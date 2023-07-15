//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to find largest rectangular area possible in a given histogram.
    long long getMaxArea(long long heights[], int n)
    {
        // Your code here
        // int n = heights.size();
        vector<long long> left(n, -1), right(n, n);
        stack<pair<long long, int>> st,st1;
        for (int i = 0; i < n; i++)
        {
            while (!st.empty() && (st.top().first >= heights[i]))
            {
                st.pop();
            }
            if (!st.empty())
            left[i] = st.top().second;
            st.push({heights[i], i});
        }
        st = st1;
        for (int i = n - 1; i >= 0; i--)
        {
            while (!st.empty() && (st.top().first >= heights[i]))
            {
                st.pop();
            }
            if (!st.empty())
            right[i] = st.top().second;
            st.push({heights[i], i});
        }
        long long area = 0;
        for (int i = 0; i < n; i++)
        {
            area = max(area, heights[i] * (right[i] - left[i] - 1));
        }
        return area;
    }
};


//{ Driver Code Starts.

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