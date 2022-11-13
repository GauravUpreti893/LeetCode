//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int lcmOfArray(int N , int A[]) {
        // code here
        long long lcm = A[0], hcf = A[0], x, mod = 1e9 + 7;
        for (int i = 1; i < N; i++)
        {
            x = A[i];
            hcf = __gcd(lcm, x);
            lcm *= x;
            lcm /= hcf;
            lcm = lcm % mod;
        }
        return lcm;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;
        int A[N];
        
        for(int i=0 ; i<N ; i++)
            cin>>A[i];

        Solution ob;
        cout<<ob.lcmOfArray(N,A)<<endl;
    }
    return 0;
}
// } Driver Code Ends