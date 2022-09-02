class Solution {
public:
    int change(int amount, vector<int>& coins) {
        int n = coins.size();
        vector<int> table(amount + 1, 0);
        table[0] = 1;
        for (int i = 0; i < n; i++)
        {
            for (int j = 1; j <= amount; j++)
            {
                if (j - coins[i] >= 0)
                table[j] += table[j - coins[i]];
            }
        }
        return table[amount];
    }
};