//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
	public:
	    int noofways(string s, int idx, vector<int> &dp)
	    {
	        int n = s.size();
	        if (idx == n)
	        return 1;
	        int p = idx;
	        if (dp[idx] != -1)
	        return dp[idx];
	        int res = 0, mod = 1e9 + 7;
	        int no = s[idx++] - '0';
	        if ((no > 0) && (no <= 9))
	        {
	            res += noofways(s, idx,dp);
	        }
	        else
	        return dp[p] = 0;
	        if (idx < n)
	        {
	            no = (s[idx++] - '0') + no*10;
	            if (no > 0 && no <= 26)
	            {
	                res += noofways(s, idx, dp);
	            }
	        }
	        return dp[p] = res % mod;
	    }
		int CountWays(string str){
		    // Code here
		    int n = str.size();
		    vector<int> dp(n, -1);
		    return noofways(str, 0, dp);
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
		int ans = obj.CountWays(str);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends