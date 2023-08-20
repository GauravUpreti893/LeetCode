//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	/* if x is present in arr[] then returns the count
		of occurrences of x, otherwise returns 0. */
	int count(int arr[], int n, int x) {
	    // code here
	    int lo = 0, hi = n - 1, mid, ans = n, ans1 = -1;
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
	    lo = 0, hi = n - 1;
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
	    ans1++;
	    return ans1 - ans;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.count(arr, n, x);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends