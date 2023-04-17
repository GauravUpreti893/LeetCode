//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'


// } Driver Code Ends
class Solution{
    public:
    int minTime(vector<pair<int, int>> &dependency, int duration[], int n, int m) {
        // 	Write your code here
        vector<vector<int>> adj(n);
        vector<int> indegree(n, 0);
        for (int i = 0; i < m; i++)
        {
            adj[dependency[i].first].push_back(dependency[i].second);
            indegree[dependency[i].second]++;
        }
        vector<int> dp(n, 0);
        queue<int> q;
        int ans = -1;
        for (int i = 0; i < n; i++)
        {
            if (!indegree[i])
            {
                q.push(i);
                dp[i] = max(dp[i], duration[i]);
                ans = max(ans, dp[i]);
            }
        }
        int count = 0;
        while (!q.empty()) 
        {
            count++;
            int par = q.front();
            q.pop();
            for (auto child : adj[par])
            {
                indegree[child]--;
                if (!indegree[child])
                {
                    q.push(child);
                }
                dp[child] = max(dp[child], dp[par] + duration[child]); // Cycle can also be present.
                ans = max(ans, dp[child]);
            }
        }
        if (count != n)
        return -1;
        return ans;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, x, y;
        cin >> n >> m;
        int duration[n + 5];
        vector<pair<int, int>> dependency;
        for (int i = 0; i < n; i++) cin >> duration[i];
        for (int i = 0; i < m; i++) {
            cin >> x >> y;
            dependency.push_back({x, y});
        }
        Solution obj;
        cout << obj.minTime(dependency, duration, n, m) << endl;
    }
    return 0;
}
// } Driver Code Ends