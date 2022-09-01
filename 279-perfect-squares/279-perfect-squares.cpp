class Solution {
public:
    int numSquares(int n) {
        vector<int> table(n + 1, INT_MAX);
        table[0] = 0;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j*j <= i; j++)
            {
                table[i] = min(table[i], table[i - j*j] + 1);
            }
        }
        return table[n];
    }
};