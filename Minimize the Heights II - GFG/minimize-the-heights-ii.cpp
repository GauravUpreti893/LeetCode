// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function template for C++

class Solution {
  public:
    int getMinDiff(int arr[], int n, int k) {
        // code here
        sort(arr, arr + n);
        int mn,mx,diff = arr[n - 1] - arr[0];
        if (arr[n - 1] < k)
        {
            return diff;
        }
        int i = 1;
        while (i < n && arr[i] < k)
        {
            // mn = arr[i] + k;
            // mx = max(arr[i - 1] + k, arr[n - 1] - k);
            // diff = min(diff, abs(mx - mn));
            i++;
        }
        for (; i < n; i++)
        {
            mn = min(arr[0] + k, arr[i] - k);
            mx = max(arr[n - 1] - k, arr[i - 1] + k);
            diff = min(diff,abs(mx - mn));
        }
        return diff;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> k;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.getMinDiff(arr, n, k);
        cout << ans << "\n";
    }
    return 0;
}  // } Driver Code Ends