class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        int table[amount + 1];
        for (int i = 1; i <= amount; i++)
            table[i] = 1e4 + 1;
        table[0] = 0;
        int n = coins.size();
        int x;
        for (int i = 1; i <= amount; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i - coins[j] < 0)
                    x = 1e4 + 1;
                else
                    x = table[i - coins[j]] + 1;
                table[i] = min(table[i],x);
            }
        }
        if (table[amount] == 1e4 + 1)
        {
            return -1;
        }
        else
            return table[amount];
        
    }
};