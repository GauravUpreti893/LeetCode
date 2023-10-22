//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
 

// } Driver Code Ends
class Solution
{
    public:
    unsigned long long powerwithmod(unsigned long long x, int y, int p)
    {
        unsigned long long res = 1; // Initialize result
      
        x = x % p; // Update x if it is more than or
        // equal to p
      
        while (y > 0) 
        {
          
            // If y is odd, multiply x with result
            if (y & 1)
                res = (res * x) % p;
      
            // y must be even now
            y = y >> 1; // y = y/2
            x = (x * x) % p;
        }
        return res;
    }
     
    // Returns n^(-1) mod p  Only applicable if p is prime
    unsigned long long modInverse(unsigned long long n, int p)
    {
        return powerwithmod(n, p - 2, p);
    }
    long long  numberOfPaths(int M, int N)
    {
        // Code Here
        long long ans = 1, x = M + N - 2, mod = 1e9 + 7;
        for (long long i = 1; i < M; i++)
        {
            ans = ans * (x - i + 1);
            ans %= mod;
            ans *= modInverse(i, mod);
            ans %= mod;
        }
        return ans;
    }
};


//{ Driver Code Starts.

 
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int N, M;
		cin>>M>>N;
		Solution ob;
	    cout << ob.numberOfPaths(M, N)<<endl;
	}
    return 0;
}
// } Driver Code Ends