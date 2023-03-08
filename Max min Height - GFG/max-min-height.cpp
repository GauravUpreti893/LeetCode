//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
        bool check(vector<int> &arr, long long k, int w, long long mn)
        {
            int n = arr.size();
            vector<long long> helper(n, 0);
            long long sum = 0;
            for (int i = 0; i < n; i++)
            {
                sum += helper[i];
                helper[i] = arr[i] + sum;
               if (helper[i] < mn)
               {
                   k -= (mn - helper[i]);
                   sum += (mn - helper[i]);
                   if (k < 0)
                   return false;
                   if (i + w < n)
                   {
                       helper[i + w] -= (mn - helper[i]);
                   }
               }
            }
            return true;
        }
        long long int maximizeMinHeight(int n,int k,int w,vector <int> &a)
        {
            // code here
            int mn = INT_MAX;
            for (int i = 0; i < n; i++)
            {
                mn = min(mn, a[i]);
            }
            long long lo = mn, hi = 1e14, mid, ans;
            while (lo <= hi)
            {
                mid = lo + (hi - lo)/2;
                if (check(a, k, w, mid))
                {
                    ans = mid;
                    lo = mid + 1;
                }
                else
                {
                    hi = mid - 1;
                }
            }
            return ans;
        }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,w;
        cin>>n>>k>>w;
        vector <int> a(n);
        for(auto &j:a)
            cin>>j;
        Solution s;
        cout<<s.maximizeMinHeight(n,k,w,a)<<endl;
    }
    return 0;
}
// } Driver Code Ends