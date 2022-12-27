//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;
// int maxArea(int A[], int len);

// } Driver Code Ends
//User function template for C++

long long maxArea(long long A[], int len)
{
    // Your code goes here
    vector<long long> minarr(101, 1e5), maxarr(101, 0);
    for (long long int i = 0; i < len; i++)
    {
        maxarr[A[i]] = max(maxarr[A[i]], i);
        minarr[A[i]] = min(minarr[A[i]], i);
     }
     long long ans = 0;
     for (long long int i = 1; i <= 100; i++)
     {
         for (long long int j = i; j <= 100; j++)
         {
             if (minarr[i] != 1e5 && minarr[j] != 1e5)
             ans = max({ans, i *(abs(maxarr[j] - minarr[i])), i *(abs(maxarr[i] - minarr[j]))});
         }
     }
     return ans;
}

//{ Driver Code Starts.

// Driver code
int main()
{
	int t;
	cin>>t;
	while(t--)
    {
        int n;
        cin>>n;
        long long arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        cout<<maxArea(arr,n)<<endl;
    }
return 0;
}

// } Driver Code Ends