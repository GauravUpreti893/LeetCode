class Solution {
public:
    int shortestPath(vector<vector<int>>& grid, int k) {
        int n = grid.size();
        int m = grid[0].size();
        vector<pair<int,int>> xy{{1, 0}, {0, 1}, {-1, 0}, {0, -1}};
        vector<int> v{0,0,k, 0};
        queue<vector<int>> q;
        q.push(v);
        int x, y;
        vector<vector<int>> visited(n, vector<int> (m, -1));
        visited[0][0] = 1;
        while (!q.empty())
        {
            v = q.front();
            q.pop();
            if (v[0] == n -1 && v[1] == m - 1)
            {
                return v[3];
            }
            for (int i = 0; i < 4; i++)
            {
                x = v[0] + xy[i].first;
                y = v[1] + xy[i].second;
                int x1 = v[2];
                if (x < 0 || y < 0 || x == n || y == m)
                    continue;
                if (grid[x][y] == 1)
                {
                    if (v[2] > 0)
                    {
                       x1--;
                    }
                    else
                        continue;
                }
                if ((visited[x][y] != -1 &&  visited[x][y] >= x1))
                {
                    continue;
                }
                visited[x][y] = x1;
                if (grid[x][y] == 1)
                {
                    if (v[2] > 0)
                    {
                        q.push({x, y, v[2] - 1, v[3] + 1});
                    }
                    else
                        continue;
                }
                else
                q.push({x, y, v[2], v[3] + 1});
            }
        }
        return -1;
    }
};