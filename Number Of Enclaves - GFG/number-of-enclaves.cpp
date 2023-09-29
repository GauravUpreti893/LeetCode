//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int numberOfEnclaves(vector<vector<int>> &grid) {
        // Code here
        queue<int> q;
        int n = grid.size(), m = grid[0].size(), ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (grid[i][0])
            {
                q.push(i*m);
                grid[i][0] = 0;
            }
            if (m > 1 && grid[i][m - 1])
            {
                q.push(i*m + m - 1);
                grid[i][m - 1] = 0;
            }
        }
        for (int i = 1; i < m - 1; i++)
        {
            if (grid[0][i])
            {
                q.push(i);
                grid[0][i] = 0;
            }
            if (n > 1 && grid[n - 1][i])
            {
                q.push((n - 1)*m + i);
                grid[n - 1][i] = 0;
            }
        }
        vector<pair<int, int>> xy{{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
        while (!q.empty())
        {
            int a = q.front() / m, b = q.front() % m;
            q.pop();
            for (int i = 0; i < 4; i++)
            {
                int x = a + xy[i].first, y = b + xy[i].second;
                if (x >= 0 && x < n && y >= 0 && y < m && grid[x][y])
                {
                    q.push(x*m + y);
                    grid[x][y] = 0;
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            ans += grid[i][j];
        }
        return ans;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> grid(n, vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        cout << obj.numberOfEnclaves(grid) << endl;
    }
}
// } Driver Code Ends