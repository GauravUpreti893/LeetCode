class Solution {
public:
    int fun(int n, int k, int t, vector<vector<int>> &table)
    {
        if (t < 0 || n < 0)
            return 0;
        if (table[n][t] != -1)
            return table[n][t];
        long long int count = 0, mod = 1e9 + 7;
        for (int i = 0; i < k; i++)
        {
            count += fun(n - 1, k, t - i - 1, table) % mod;
            count = count % mod;
        }
        return table[n][t] = count % mod;
    }
    int numRollsToTarget(int n, int k, int target) {
        vector<vector<int>> table(n + 1, vector<int>(target + 1, -1));
        for (int i = 1; i <= n; i++)
            table[i][0] = 0;
        table[0][0] = 1;
        for (int i = 1; i <= target; i++)
            table[0][i] = 0;
        return fun(n, k, target, table);
    }
};