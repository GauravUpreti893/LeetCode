//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

typedef long long ll;
ll mod = 1e9 + 7;
class Solution{
	public:
	ll modinverse(ll n)
	{
	    ll r = mod - 2, ans = 1;
	    while (r)
	    {
	        if (r & 1)
	        {
	            ans *= n;
	            ans = ans % mod;
	        }
	        n *= n;
	        n = n % mod;
	        r >>= 1;
	    }
	    return ans;
	}
	int compute_value(int n)
	{
	    // Code here
	    ll ans = 2, ncr = 1;
	    for (ll r = 1; r < n; r++)
	    {
	        ncr *= (n - r + 1);
	        ncr %= mod;
	        ncr *= modinverse(r);
	        ncr %= mod;
	        ans += (ncr*ncr)%mod;
	        ans %= mod;
	    }
	    return (int)ans;
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		Solution ob;
		int ans = ob.compute_value(n);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends