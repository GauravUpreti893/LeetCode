//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    long long permut(vector<int> &arr, vector<vector<bool>> &connection, vector<vector<long long>> &dp, int mask, int prev)
    {
        if (prev != -1 && dp[mask][prev] != -1)
        return dp[mask][prev];
        if (mask == 0)
        return 1;
        int n = arr.size();
        long long res = 0;
        for (int i = 0; i < n; i++)
        {
            if (mask & (1<<i) && (prev == -1 || (connection[prev][arr[i]])))
            {
                res += permut(arr, connection, dp, mask^(1<<i), arr[i]);
            }
        }
        if (prev != -1)
        return dp[mask][prev] = res;
        return res;
    }
    long long int luckyPermutations(int N, int M, vector<int>& arr,
                                    vector<vector<int>>& graph) {
        // Code here
        int mask = (1<<N) - 1;
        vector<vector<bool>> connection(N + 1, vector<bool> (N + 1, false));
        for (int i = 0; i < M; i++)
        {
            int x = graph[i][0];
            int y = graph[i][1];
            connection[x][y] = true;
            connection[y][x] = true;
        }
        vector<vector<long long>> dp(mask, vector<long long> (N + 1, -1));
        return permut(arr, connection, dp, mask, -1);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, M;
        cin >> N >> M;
        vector<int> arr(N);
        vector<vector<int>> graph(M, vector<int>(2));
        for (int i = 0; i < N; i++) {
            cin >> arr[i];
        }
        for (int i = 0; i < M; i++) {
            for (int j = 0; j < 2; j++) {
                cin >> graph[i][j];
            }
        }
        Solution obj;
        cout << obj.luckyPermutations(N, M, arr, graph) << endl;
    }
}

// } Driver Code Ends