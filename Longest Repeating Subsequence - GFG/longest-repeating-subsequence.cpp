//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
	public:
		int LongestRepeatingSubsequence(string str){
		    // Code here
		    int n = str.size();
		    vector<vector<int>> dp(n + 1, vector<int> (n + 1, 0));
		    int ans = 0;
		    for (int i = n - 2; i >= 0; i--)
		    {
		        for (int j = n - 1; j > i; j--)
		        {
		            if (str[i] == str[j])
		            {
		              //  cout<<i<<" "<<j<<endl;
		                dp[i][j] = 1 + dp[i + 1][j + 1];
		                ans = max(ans, dp[i][j]);
		            }
		            else
		            dp[i][j] = max(dp[i + 1][j], dp[i][j + 1]);
		        }
		    }
		    return ans;
		}

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string str;
		cin >> str;
		Solution obj;
		int ans = obj.LongestRepeatingSubsequence(str);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends