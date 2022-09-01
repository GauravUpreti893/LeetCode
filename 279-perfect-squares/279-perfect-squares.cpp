class Solution {
public:
    int minsq(int n, vector<int> &table)
    {
        if (table[n] != INT_MAX)
            return table[n];
        for (int i = 1; i*i <= n; i++)
        {
            table[n] = min(table[n], minsq(n - i*i, table) + 1);
        }
        return table[n];
    }
    int numSquares(int n) {
        if (n == 0)
        {
            return 0;
        }
        vector<int> table(n + 1, INT_MAX);
        table[0] = 0;
        return minsq(n, table);
    }
};