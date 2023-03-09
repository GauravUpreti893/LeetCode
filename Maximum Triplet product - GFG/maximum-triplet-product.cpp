//{ Driver Code Starts
//Initial Template for CPP

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    long long maxTripletProduct(long long arr[], int n)
    {
    	// Complete the function
    	long long a = -1e6, b = -1e6, c = -1e6, d = 1e6, e = 1e6;
    	for (int i = 0; i < n; i++)
    	{
    	    if (arr[i] >= a)
    	    {
    	        c = b;
    	        b = a;
    	        a = arr[i];
    	    }
    	    else if (arr[i] >= b)
    	    {
    	        c = b;
    	        b = arr[i];
    	    }
    	    else if (arr[i] > c)
    	    {
    	        c = arr[i];
    	    }
    	    if (arr[i] <= d)
    	    {
    	        e = d;
    	        d = arr[i];
    	    }
    	    else if (arr[i] < e)
    	    {
    	        e = arr[i];
    	    }
    	}
    	return max(a*b*c, d*e*a);
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n,i;
	    cin>>n; long long arr[n];
	    for(i=0;i<n;i++)
	    cin>>arr[i];
	    Solution ob;
	    cout <<ob.maxTripletProduct(arr, n);
	    cout<<"\n";
	}
    return 0;
}
// } Driver Code Ends