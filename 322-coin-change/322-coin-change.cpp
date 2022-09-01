class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        vector<int> table(amount + 1, 1e4 + 1);
        int n = coins.size();
        table[0] = 0;
        for (int i = 1; i <= amount; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i - coins[j] >= 0)
                table[i] = min(table[i], table[i - coins[j]] + 1);
            }
        }
        if (table[amount] == 1e4 + 1)
            return -1;
        return table[amount];
    }
};