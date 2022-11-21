class Solution {
public:
    int nearestExit(vector<vector<char>>& maze, vector<int>& entrance) {
        int n = maze.size(), m = maze[0].size();
        int sx = entrance[0], sy = entrance[1];
        queue<vector<int>> q;
        vector<int> v(3);
        v[0] = sx;
        v[1] = sy;
        v[2] = 0;
        q.push(v);
        int x, y, l, tx, ty;
        vector<vector<bool>> visited(n, vector<bool> (m, 0));
        visited[sx][sy] = 1;
        vector<pair<int, int>> xy{{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
        while (!q.empty())
        {
            v = q.front();
            q.pop();
            x = v[0];
            y = v[1];
            l = v[2];
            l++;
            for (int i = 0; i < 4; i++)
            {
                tx = x + xy[i].first;
                ty = y + xy[i].second;
                
                if (tx >= 0 && tx < n && ty >= 0 && ty < m && visited[tx][ty] == 0 && maze[tx][ty] == '.')
                {
                    if (tx == 0 || tx == n - 1 || ty == 0 || ty == m - 1)
                    return l;
                    visited[tx][ty] = 1;
                    v[0] = tx;
                    v[1] = ty;
                    v[2] = l;
                    q.push(v);
                }
            }
        }
        return -1;
    }
};