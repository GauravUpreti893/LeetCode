//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int shortestXYDist(vector<vector<char>> grid, int N, int M) {
        // code here
        vector<vector<bool>> vis(N, vector<bool> (M, 0));
        queue<pair<int, int>> q;
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < M; j++)
            {
                if (grid[i][j] == 'X')
                {
                    q.push({i, j});
                    vis[i][j] = 1;
                }
            }
        }
        int dis = 1;
        vector<pair<int, int>> xy{{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
        while (!q.empty())
        {
            int n = q.size();
            for (int i = 0; i < n; i++)
            {
                int a = q.front().first;
                int b = q.front().second;
                q.pop();
                int x, y;
                for (int j = 0; j < 4; j++)
                {
                    x = a + xy[j].first;
                    y = b + xy[j].second;
                    if (x < N && y < M && x >= 0 && y >= 0 && !vis[x][y])
                    {
                        if (grid[x][y] == 'Y')
                        return dis;
                        q.push({x, y});
                        vis[x][y] = 1;
                    }
                }
            }
            dis++;
        }
        return 0;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, M;
        char ch;
        cin >> N >> M;

        vector<vector<char>> grid;

        for (int i = 0; i < N; i++) {
            vector<char> col;
            for (int i = 0; i < M; i++) {
                cin >> ch;
                col.push_back(ch);
            }
            grid.push_back(col);
        }

        Solution ob;
        cout << ob.shortestXYDist(grid, N, M) << endl;
    }
    return 0;
}
// } Driver Code Ends