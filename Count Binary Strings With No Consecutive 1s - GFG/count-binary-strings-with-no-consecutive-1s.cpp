//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    long long fib(long long n, long long mod)
    {
        long long F[2][2] = {{1, 1}, {1, 0}};
        if (n == 0)
            return 0;
        powerFib(F, n - 1, mod);
     
        return F[0][0];
    }
 
    void powerFib(long long F[2][2], long long n, long long mod)
    {
        if(n == 0 || n == 1)
           return;
        long long M[2][2] = {{1, 1}, {1, 0}};
         
        powerFib(F, n / 2, mod);
        multiplyFib(F, F, mod);
         
        if (n % 2 != 0)
            multiplyFib(F, M, mod);
    }
 
    void multiplyFib(long long F[2][2], long long M[2][2], long long mod)
    {
        long long x = (F[0][0] * M[0][0])%mod + (F[0][1] * M[1][0])%mod;
        long long y = (F[0][0] * M[0][1])%mod + (F[0][1] * M[1][1])%mod;
        long long z = (F[1][0] * M[0][0])%mod + (F[1][1] * M[1][0])%mod;
        long long w = (F[1][0] * M[0][1])%mod + (F[1][1] * M[1][1])%mod;
         
        F[0][0] = x%mod;
        F[0][1] = y%mod;
        F[1][0] = z%mod;
        F[1][1] = w%mod;
    }
    int countStrings(long long int N) {
        // Code here
        long long mod = 1e9 + 7;
        return fib(N + 2, mod);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long int N;
        cin >> N;
        Solution obj;
        cout << obj.countStrings(N) << endl;
    }
}
// } Driver Code Ends