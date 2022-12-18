//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    long long maxfun(long long n)
    {
        if (n == 2)
        return 2;
        if (n == 3)
        return 6;
        long long ans = n;
        ans *= n - 1; 
        int count = 0;
        for (long long i = n - 2; i > 2; i--)
        {
            if (__gcd(i, ans) == 1)
            {
                ans *= i;
                count++;
                if (count == 2)
                return ans;
            }
        }
        return ans;
    }
    long long maxGcd(int N) {
        // code here
        return max(maxfun(N), maxfun(N - 1));
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.maxGcd(N) << "\n";
    }
}
// } Driver Code Ends