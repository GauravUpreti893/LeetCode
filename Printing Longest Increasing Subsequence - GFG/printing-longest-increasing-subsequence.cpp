//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> longestIncreasingSubsequence(int n, vector<int>& arr) {
        // Code here
        vector<int> dp(n, 1), hash(n), ans;
        int idx = 0, len = 1;
        for (int i = 0; i < n; i++)
        {
            hash[i] = i;
            for (int j = 0; j < i; j++)
            {
                if (arr[i] > arr[j])
                {
                    if (dp[i] < 1 + dp[j])
                    {
                        hash[i] = j;
                    }
                    dp[i] = max(dp[i], 1 + dp[j]);
                    len = max(len, dp[i]);
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (dp[i] == len)
            {
                idx = i;
                break;
            }
        }
        while (hash[idx] != idx)
        {
            ans.push_back(arr[idx]);
            idx = hash[idx];
        }
        ans.push_back(arr[idx]);
        reverse(ans.begin(), ans.end());
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<int> arr(N);
        for (int i = 0; i < N; i++) {
            cin >> arr[i];
        }
        Solution obj;
        vector<int> res = obj.longestIncreasingSubsequence(N, arr);
        for (auto x : res) cout << x << " ";
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends