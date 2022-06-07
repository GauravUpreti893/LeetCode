class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        if (n == 1)
            return 0;
        int mx = prices[n - 1];
        vector<int> table(n);
        for (int i = n - 2; i >= 0; i--)
        {
            table[i] = mx;
            mx = max(mx, prices[i]);
        }
        int ans = 0;
        for (int i = 0; i < n - 1; i++)
        {
            ans = max(ans,(table[i] - prices[i]));
        }
        return ans;
    }
};