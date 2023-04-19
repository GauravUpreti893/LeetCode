//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{

	public:
	int minCoins(int coins[], int M, int amount) 
	{ 
	    // Your code goes here
        vector<int> dp(amount + 1, 1e6 + 1);
        dp[0] = 0;
        for (int i = 1; i <= M; i++)
        {
            for (int j = 1; j <= amount; j++)
            {
                if (j - coins[i - 1] >= 0)
                dp[j] = min(dp[j], 1 + dp[j - coins[i - 1]]);
            }
        }
        if (dp[amount] == (1e6 + 1))
        return -1;
        return dp[amount];
	} 
	  
};

//{ Driver Code Starts.
int main() 
{
   
   
   	int t;
    cin >> t;
    while (t--)
    {
        int v, m;
        cin >> v >> m;

        int coins[m];
        for(int i = 0; i < m; i++)
        	cin >> coins[i];

      
	    Solution ob;
	    cout << ob.minCoins(coins, m, v) << "\n";
	     
    }
    return 0;
}

// } Driver Code Ends