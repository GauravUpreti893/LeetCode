class Solution {
public:
    int npaths(int a, int b, int i, int j, vector<vector<int>> &table)
    {
        if (i == a || j == b)
        return 0;
        int ans = 0;
        if (table[i][j] != -1)
        {
            return table[i][j];
        }
        ans += npaths(a, b, i, j + 1, table);
        ans += npaths(a, b, i + 1, j, table);
        return table[i][j] = ans;
    }
    int uniquePaths(int m, int n) {
        vector<vector<int>> table(m, vector<int> (n, - 1));
        table[m - 1][n - 1] = 1;
        return npaths(m, n, 0, 0, table);
    }
};