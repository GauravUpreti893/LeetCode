//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
public:
    int maxCoins(int n, vector<int> &nums) {
        // code here
        vector<vector<int>> dp(n + 1, vector<int>(n + 1, 0));
        for (int st = n; st > 0; st--)
        {
            for (int end = st; end <= n; end++)
            {
                int ans = 0;
                for (int i = st; i <= end; i++)
                {
                    int prev = 1, next = 1;
                    if (st > 1)
                    prev = nums[st - 2];
                    if (end != n)
                    next = nums[end];
                    ans = max(ans, prev * nums[i - 1] * next + dp[st][i - 1] + ((i + 1 <= n) ? dp[i + 1][end] : 0));
                }
                dp[st][end] = ans;
            }
        }
        return dp[1][n];
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin>>N;
        
        vector<int> arr(N);
        for(int i=0; i<N; i++)
            cin>>arr[i];

        Solution obj;
        cout << obj.maxCoins(N, arr) << endl;
    }
    return 0;
}
// } Driver Code Ends