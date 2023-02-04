//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// calculate the maximum sum with out adjacent
	int mxsum(int *arr, vector<int> &dp, int idx)
	{
	    int n = dp.size();
	    if (idx == n)
	    return 0;
	    if (dp[idx] != -1)
	    return dp[idx];
	    return dp[idx] = max(mxsum(arr, dp, idx + 2) + arr[idx], mxsum(arr, dp, idx + 1));
	    
	}
	int findMaxSum(int *arr, int n) {
	    // code here
	    vector<int> dp(n, -1);
	    dp[n - 1] = arr[n - 1];
	    return mxsum(arr, dp, 0);
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.findMaxSum(arr, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends