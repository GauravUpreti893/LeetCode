//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    int minimumCost(vector<vector<int>>& flights, int n, int k) {
        // code here
        vector<vector<pair<int, int>>> adj(n + 1);
        int m = flights.size();
        for (int i = 0; i < m; i++)
        {
            adj[flights[i][0]].push_back({flights[i][1], flights[i][2]});
        }
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        vector<int> dis(n + 1, 5e4 + 1);
        dis[k] = 0;
        pq.push({0, k});
        int p, d;
        while (!pq.empty())
        {
            p = pq.top().second;
            d = pq.top().first;
            pq.pop();
            for (auto i : adj[p])
            {
                if (d + i.second < dis[i.first])
                {
                    dis[i.first] = d + i.second;
                    pq.push({dis[i.first], i.first});
                }
            }
        }
        int amount = 0;
        for (int i = 1; i <= n; i++)
        {
            amount = max(amount, dis[i]);
        }
        if (amount == 5e4 + 1)
        return -1;
        return amount;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int size;
        cin >> size;
        vector<vector<int>> flights(size,vector<int>(3));
        for (int i = 0; i < size; i++) {
            vector<int> temp;
            for (int j = 0; j < 3; ++j) {
                int x;
                cin >> x;
                temp.push_back(x);
            }
            flights[i]=temp;
        }

        Solution ob;
        cout << ob.minimumCost(flights, n, k) << "\n";
    }
}

// } Driver Code Ends