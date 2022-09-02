class Solution {
public:
    int noofways(int amount, vector<int>&coins, int n, int i, vector<vector<int>>&table)
    {
        if (i == n || amount < 0)
            return 0;
        if (table[i][amount] != -1)
            return table[i][amount];
        if (amount - coins[i] == 0)
            return 1;
        return table[i][amount] = noofways(amount, coins, n, i + 1, table) + noofways(amount - coins[i], coins, n, i, table); 
    }
    int change(int amount, vector<int>& coins) {
        int n = coins.size();
        vector<vector<int>> table(n, vector<int> (amount + 1, -1));
        for (int i = 0; i < n; i++)
        {
            table[i][0] = 1;
        }
        return noofways(amount, coins, n, 0, table);
    }
};