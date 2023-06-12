//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution{
  public:
    int rod(int *price, vector<int> &dp, int st)
    {
        int n = dp.size();
        if (st == n)
        return 0;
        if (dp[st] != -1)
        return dp[st];
        int ans = 0;
        for (int i = st; i < n; i++)
        {
            ans = max(ans, price[i - st] + rod(price, dp, i + 1));
        }
        return dp[st] = ans;
    }
    int cutRod(int price[], int n) {
        //code here
        vector<int> dp(n, -1);
        return rod(price, dp, 0);
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) 
            cin >> a[i];
            
        Solution ob;

        cout << ob.cutRod(a, n) << endl;
    }
    return 0;
}
// } Driver Code Ends