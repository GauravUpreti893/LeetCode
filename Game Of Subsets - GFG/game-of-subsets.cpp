//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
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
    long long moduloMultiplication(long long a, long long b,
                               long long mod)
    {
    long long res = 0; // Initialize result

    // Update a if it is more than
    // or equal to mod
    a %= mod;

    while (b) {
        // If b is odd, add a with result
        if (b & 1)
            res = (res + a) % mod;

        // Here we assume that doing 2*a
        // doesn't cause overflow
        a = (2 * a) % mod;

        b >>= 1; // b = b / 2
    }

    return res;
    }
    int goodSubsets(vector<int> &arr, int n){
        // Code here
        vector<int> v;
        long long ans = 0, mod = 1e9 + 7, one = 0;
        vector<bool> good(31, 1);
        good[1] = 0;
        for (int i = 4; i <= 28; i += 4)
        good[i] = 0;
        for (int i = 9; i <= 27; i += 9)
        good[i] = 0;
        good[25] = 0;
        vector<long long> freq(31, 0);
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == 1)
            one++;
            freq[arr[i]]++;
            if (good[arr[i]])
            {
                good[arr[i]] = 0;
                v.push_back(arr[i]);
            }
        }
        n = v.size();
        vector<int> primes{2, 3, 5, 7, 11, 13, 17, 19, 23, 29};
        vector<bitset<10>> factors(n);
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < 10; j++)
            {
                if (v[i] % primes[j] == 0)
                factors[i][j] = 1;
            }
        }
        int size = pow(2, n);
        for (int i = 1; i < size; i++)
        {
            vector<bool> exist(31, 0);
            bitset<10> bst;
            long long prod = 1;
            for (int j = 0; j < n; j++)
            {
                if (i & (1<<j))
                {
                    if ((bst & factors[j]).any())
                    {
                        prod = 0;
                        break;
                    }
                    bst |= factors[j];
                    prod *= freq[v[j]];
                    prod %= mod;
                }
            }
            ans += prod;
        }
        long long mult = powerwithmod(2, one, mod);
        ans = moduloMultiplication(ans, mult, mod);
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        Solution ob;
        cout<<ob.goodSubsets(a, n)<<endl;
    }
    return 0;
}
// } Driver Code Ends