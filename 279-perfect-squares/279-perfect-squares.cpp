class Solution {
public:
    int numSquares(int n) {
        int table[n + 1];
        for (int i = 0; i <=n; i++)
        {
            table[i] = 1e4 + 1;
        }
        table[0] = 0;
        table[1] = 1;
        for (int i = 2; i <= n; i++)
        {
            int j = 1;
            while (j*j <= i)
            {
                table[i] = min(table[i], table[i - j*j] + 1);
                j++;
            }
        }
        return table[n];
    }
};