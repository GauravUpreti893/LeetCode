//{ Driver Code Starts
//Initial Template for C++


#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
public:
    vector<int> nearestSmallerTower(vector<int> arr)
    {
        // code here
        int n = arr.size();
        stack<pair<int, int>> st;
        vector<int> right(n, 2e5), left(n, -1e5), ans (n);
        for (int i = n - 1; i >= 0; i--)
        {
            while (!st.empty() && st.top().first >= arr[i])
            st.pop();
            if (!st.empty())
            {
                right[i] = st.top().second;
            }
            st.push({arr[i], i});
        }
        st = stack<pair<int, int>>();
        for (int i = 0; i < n; i++)
        {
            while (!st.empty() && st.top().first >= arr[i])
            st.pop();
            if (!st.empty())
            {
                left[i] = st.top().second;
            }
            st.push({arr[i], i});
        }
        for (int i = 0; i < n; i++)
        {
            if (i - left[i] < right[i] - i)
            {
                ans[i] = left[i];
            }
            else if (i - left[i] > right[i] - i)
            {
                ans[i] = right[i];
            }
            else
            {
                if (arr[left[i]] < arr[right[i]])
                {
                    ans[i] = left[i];
                }
                else if (arr[left[i]] > arr[right[i]])
                {
                    ans[i] = right[i];
                }
                else
                {
                    ans[i] = left[i];
                }
            }
            if (abs(ans[i]) >= 1e5)
            ans[i] = -1;
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        Solution ob;
        vector<int> ans = ob.nearestSmallerTower(v);
        for (int i = 0; i < n; i++)
        {
            cout << ans[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends