// { Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution{
	public:
	int Find(int *dp, int n)
	{   
	    
	    if(n==1||n==2||n==3||n==0)
	        return n;
	   
	   if(dp[n]!= 1e9 +7){
	       return dp[n];
	   }
	   
	   for(int i =1; i*i<=n; i++){
	       dp[n] = min(dp[n], 1 + Find(dp, n-i*i));
	   }
	   
	   return dp[n];
	}
	
	int MinSquares(int n)
	{   
	    int N = n + 1, MOD = 1e9 +7;
	    int dp[N];
	    for(int i = 0; i<N; i++){
	        dp[i] = MOD;   
	    }
	    return Find(dp, n);
	}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		Solution ob;
		int ans = ob.MinSquares(n);
		cout << ans <<"\n";
	}
	return 0;
}  // } Driver Code Ends