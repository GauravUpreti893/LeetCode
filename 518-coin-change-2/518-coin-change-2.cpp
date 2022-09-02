class Solution {
public:
    int change(int amount, vector<int>& coins) {
        int n = coins.size();
        vector<vector<int>> table(n + 1, vector<int> (amount + 1));
        for (int i = 1; i <= amount; i++)
        {
            table[0][i] = 0;
        }
        for (int i = 0; i <= n; i++)
        {
            table[i][0] = 1;
        }
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= amount; j++)
            {
                table[i][j] = table[i - 1][j];
                if (j - coins[i - 1] >= 0)
                    table[i][j] += table[i][j - coins[i - 1]];
            }
        }
        return table[n][amount];
    }
};