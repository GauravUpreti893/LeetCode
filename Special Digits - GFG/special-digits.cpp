//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

int p = 1e9 + 7;
long long fac[100001], invfac[100001];
bool flag1 = false;
class Solution {
  public:
    void initialise()
    {
        fac[0] = 1;
        int n = 1e5;
        long long p = 1e9 + 7;
        for (int i = 1; i <= n; i++)
        fac[i] = (fac[i - 1] * i) % p;
        invfac[n] = modInverse(fac[n], p);
        for (int i = n - 1; i >= 0; i--)
        {
            invfac[i] = ((i + 1)*invfac[i + 1]) % p;
        }
        return;
    }
    unsigned long long modInverse(unsigned long long n, int p)
    {
        return powerwithmod(n, p - 2, p);
    }
    long long powerwithmod(long long x, int y, int p)
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
    int nCrModPFermat(long long n, int r)
    {
        if (n < r)
            return 0;
        if (r == 0)
            return 1;
        return (fac[n] * invfac[r] % p * invfac[n - r] % p);
    }
    int bestNumbers(int N, int A, int B, int C, int D) {
        // code here
        if (!flag1)
        {
            flag1 = true;
            initialise();
        }
        long long ans = 0, mod = 1e9 + 7;
        if (A == B)
        {
            int sum = N*A;
            bool flag = false;
            int r;
            while (sum)
            {
                r = sum % 10;
                if (r == C || r == D)
                {
                    flag = true;
                    break;
                }
                sum /= 10;
            }
            return flag;
        }
        for (int i = 0; i <= N; i++)
        {
            int a = i;
            int b = N - i;
            int sum = a*A + b*B;
            bool flag = false;
            int r;
            while (sum)
            {
                r = sum % 10;
                if (r == C || r == D)
                {
                    flag = true;
                    break;
                }
                sum /= 10;
            }
            if (flag)
            {
                ans += nCrModPFermat(N, a);
                ans %= mod;
            }
        }
        return ans;
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        int N;
        scanf("%d",&N);
        
        
        int A;
        scanf("%d",&A);
        
        
        int B;
        scanf("%d",&B);
        
        
        int C;
        scanf("%d",&C);
        
        
        int D;
        scanf("%d",&D);
        
        Solution obj;
        int res = obj.bestNumbers(N, A, B, C, D);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends