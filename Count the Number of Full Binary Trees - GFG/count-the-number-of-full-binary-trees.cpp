//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
public:
    
    long long int numoffbt(long long int arr[], int n){
        // Your code goes here
        long long ans = 0, mod = 1e9 + 7, mx = 0, mn = arr[0];
        for (int i = 0; i < n; i++)
        {
            mx = max(mx, arr[i]);
            mn = min(mn, arr[i]);
        }
        vector<long long> v(mx + 1, 0);
        for (int i = 0; i < n; i++)
        {
            v[arr[i]] = 1;
        }
        for (int i = mn; i <= mx; i++)
        {
            if (!v[i])
            continue;
            for (long long j = 2*i; j <= mx && j/i <= i; j += i)
            {
                if (v[j])
                {
                    v[j] += v[i]*v[j/i];
                    v[j] %= mod;
                    if (i != j/i)
                    {
                        v[j] += v[i]*v[j/i];
                        v[j] %= mod;
                    }
                }  
            }
            ans += v[i];
            ans = ans % mod;
        }
        return ans;
    }
};


//{ Driver Code Starts.

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		long long int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		Solution ob;
		cout<<ob.numoffbt(a,n)<<endl;
		
	}
	return 0;
}


// } Driver Code Ends