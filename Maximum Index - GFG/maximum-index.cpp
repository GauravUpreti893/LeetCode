//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
    int maxIndexDiff(int arr[], int n) {
        // code here
        vector<int> minonleft(n), maxonright(n);
        int mn = INT_MAX, mx = 0;
        for (int i = 0; i < n; i++)
        {
            mn = min(mn, arr[i]);
            minonleft[i] = mn;
        }
        for (int i = n - 1; i >= 0; i--)
        {
            mx = max(mx, arr[i]);
            maxonright[i] = mx;
        }
        int i = 0, j = 0, ans = 0;
        while (i < n && j < n)
        {
            if (minonleft[i] <= maxonright[j])
            {
                ans = max(ans, j - i);
                j++;
            }
            else
            {
                i++;
            }
        }
        return ans;
    }

};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.maxIndexDiff(a, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends