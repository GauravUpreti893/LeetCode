//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    vector<int> find(int arr[], int n , int x )
    {
        // code here
        int lo = 0, hi = n - 1, mid, ans = 0, ans1 = 0;
        while (lo <= hi)
        {
            mid = lo + (hi - lo)/2;
            if (arr[mid] >= x)
            {
                ans = mid;
                hi = mid - 1;
            }
            else
            lo = mid + 1;
        }
        if (arr[ans] != x)
        return {-1, -1};
        lo = 0; hi = n - 1;
        while (lo <= hi)
        {
            mid = lo + (hi - lo)/2;
            if (arr[mid] <= x)
            {
                ans1 = mid;
                lo = mid + 1;
            }
            else
            hi = mid - 1;
        }
        return {ans, ans1};
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        Solution ob;
        ans=ob.find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}



// } Driver Code Ends