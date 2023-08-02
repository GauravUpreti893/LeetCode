//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int shortestDistance(int n, int m, vector<vector<int>> A, int xa, int xb) {
        // code here
        queue<int> q;
        vector<bool> vis(n*m, 0);
        vis[0] = 1;
        q.push(0);
        vector<pair<int, int>> xy{{0, 1}, {1, 0}, {-1, 0}, {0, -1}};
        int dis = 0;
        while (!q.empty())
        {
            int k = q.size();
            for (int i = 0; i < k; i++)
            {
                int a = q.front() / m;
                int b = q.front() % m;
                q.pop();
                if ((a == xa) && (b == xb))
                return dis;
                for (int j = 0; j < 4; j++)
                {
                    int x = a + xy[j].first;
                    int y = b + xy[j].second;
                    if (x >= 0 && y >= 0 && x < n && y < m && !vis[x*m + y] && A[x][y])
                    {
                        q.push(x*m + y);
                        vis[x*m + y] = 1;
                    }
                }
            }
            dis++;
        }
        return -1;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, M, x, y;
        cin >> N >> M;
        vector<vector<int>> v(N, vector<int>(M));
        for (int i = 0; i < N; i++)
            for (int j = 0; j < M; j++) cin >> v[i][j];
        cin >> x >> y;
        Solution ob;
        cout << ob.shortestDistance(N, M, v, x, y) << "\n";
    }
}
// } Driver Code Ends