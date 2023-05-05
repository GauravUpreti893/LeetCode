//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
		

	public:
	int minOperations(string word1, string word2) 
	{ 
	    // Your code goes here
	    int n = word1.size(), m = word2.size();
        vector<vector<int>> dp(2, vector<int> (m + 1, 0));
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                if (word1[i - 1] == word2[j - 1])
                {
                    dp[i%2][j] = 1 + dp[!(i%2)][j - 1];
                }
                else
                {
                    dp[i%2][j] = max(dp[!(i%2)][j], dp[i%2][j - 1]);
                }
            }
        }
        return m + n - 2*dp[n%2][m];
	    
	} 
};

//{ Driver Code Starts.
int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
        string s1, s2;
        cin >> s1 >> s2;

	    Solution ob;
	    cout << ob.minOperations(s1, s2) << "\n";
	     
    }
    return 0;
}


// } Driver Code Ends