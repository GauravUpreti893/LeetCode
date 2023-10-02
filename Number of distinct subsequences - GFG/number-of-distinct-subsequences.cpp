//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
  public:	
	int distinctSubsequences(string s)
	{
	    // Your code goes here
	    int ans = 0, mod = 1e9 + 7, n = s.size();
	    vector<int> res(26, -1);
	    for (int i = 0; i < n; i++)
	    {
	        int temp = ans;
            ans += (ans + (res[s[i] - 'a'] == -1) - ((res[s[i] - 'a'] == -1)?0:res[s[i] - 'a']) + mod)%mod;
            ans %= mod;
            // cout<<ans<<endl;
            res[s[i] - 'a'] = temp;
	    }
	    return (ans + 1)%mod;
	}
};

//{ Driver Code Starts.

int main() 
{
   	

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string s;
   		cin >> s;

        Solution ob;
   		cout << ob.distinctSubsequences(s) << "\n";
   	}

    return 0;
}
// } Driver Code Ends