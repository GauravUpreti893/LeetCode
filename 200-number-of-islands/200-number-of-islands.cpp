class Solution {
public:
    void dfs(vector<vector<char>> &grid, int i, int j, int n, int m)
    {
        if (i < 0 || j < 0 || i ==n || j == m || grid[i][j] == '0')
        return;
        grid[i][j] = '0';
        vector<pair<int,int>> v;
        v.push_back({0, 1});
        v.push_back({0,-1});
        v.push_back({1, 0});
        v.push_back({-1, 0});
        for (int k = 0; k < 4; k++)
        {
            dfs(grid, i + v[k].first, j + v[k].second, n, m);
        }
        return;
    }
    int numIslands(vector<vector<char>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (grid[i][j] == '0')
                continue;
                count++;
                // cout<<i<<" "<<j<<endl;
                dfs(grid, i, j, n, m);
            }
        }
        return count;
    }
};