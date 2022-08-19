class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int count = 0, sedge = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (grid[i][j])
                {
                    if (i > 0 && grid[i - 1][j])
                        sedge++;
                    if (j > 0 && grid[i][j - 1])
                        sedge++;
                    count++;
                }
            }
        }
        return count*4 - sedge*2;
    }
};