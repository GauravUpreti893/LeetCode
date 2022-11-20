//{ Driver Code Starts
// Initial Template for C++

// Initial Template for C++
// Back-end complete function Template for C++
// User function Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    long long lcmTriplets(long long N) {
        // code here
        if (N <= 2)
        return N;
        long long ans;
        if (N%2)
        {
            ans = N * (N - 1)* (N - 2);
        }
        else
        {
            ans = (N - 1)* (N - 2)* (N - 3);
            long long x = (N)*(N - 1)*(N - 2);
            x /= __gcd(N, N - 2);
            long long y = (N)*(N - 1)*(N - 3);
            y /= __gcd(N*(N - 1), N- 3);
            ans = max({ans, x, y});
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long N;
        cin >> N;
        Solution ob;
        cout << ob.lcmTriplets(N) << "\n";
    }
}
// } Driver Code Ends