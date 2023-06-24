//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    int lengthOfLongestAP(int nums[], int n) {
        // code here
        if (n == 1)
        return 1;
        int mx = 0, mn = 1000;
        for (int i = 0; i < n; i++)
        {
            mx = max(mx, nums[i]);
            mn = min(mn, nums[i]);
        }
        vector<vector<int>> dp(n, vector<int> (2*(mx - mn) + 1, 1));
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                int diff = nums[j] - nums[i] + mx - mn;
                dp[j][diff] = 1 + dp[i][diff];
                ans = max(ans, dp[j][diff]);
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
        int n;
        cin >> n;
        int A[n];
        for (int i = 0; i < n; i++) {
            cin >> A[i];
        }
        Solution ob;
        auto ans = ob.lengthOfLongestAP(A, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends