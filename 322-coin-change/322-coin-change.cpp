// class Solution {
// public:
//     int count(vector<int> &coins, int amount, vector<vector<int>> &table,int n)
//     {
//         if (amount == 0)
//             return 0;
//         if (table[n][amount] == 1e4 + 1)
//         {
//             int x,y = 1e4 + 1;
//             for (int i = n; i > 0;i--)
//             {
//                 if (amount - coins[i - 1] < 0)
//                     x = 1e4 + 1;
//                 else
//                     x = count(coins,amount - coins[i - 1],table, i) + 1;
//                 y = min(y,x);
//             }
//             table[n][amount] = y;
//         }
//         return table[n][amount];
//     }
//     int coinChange(vector<int>& coins, int amount) {
//         int n = coins.size();
//         // vector<int> ncoins;
//         // for (int i = 0; i < n; i++)
//         // {
//         //     if (coins[i] <= amount)
//         //         ncoins.push_back(coins[i]);
//         // }
//         // int nwn = ncoins.size();
//         vector<vector<int>> table(n + 1,vector<int>(amount + 1,1e4 + 1));
                                  
//         // for (int i = 0; i <= n;i++)
//         // {
//         //     table[i][0] = 0;
//         // }  
//         int ans = count(coins,amount,table,n);
//         if (ans == 1e4 + 1)
//             return -1;
//         return ans;
//     }
// };

class Solution {
public:
    int dp[10000 + 1][12 + 1];  // New Line Added
    
    int memoization(vector<int>& wt, int w, int n)
    {
        if (n == 0 || w == 0)
            return (w == 0) ? 0 : INT_MAX - 1;
        
        if (dp[w][n] != -1) // New Line Added
            return dp[w][n];  // New Line Added
			
        if (wt[n - 1] > w) 
            return dp[w][n] = 0 + memoization(wt, w - 0, n - 1);
        else 
            return dp[w][n] = min(0 + memoization(wt, w - 0, n - 1), 1 + memoization(wt, w - wt[n - 1], n));
    }
    
    int coinChange(vector<int>& coins, int amount) 
    {
        memset(dp, -1, sizeof(dp)); // New Line Added
        int minCoins = memoization(coins, amount, coins.size());
        return minCoins == INT_MAX - 1 ? -1 : minCoins;    
    }
};