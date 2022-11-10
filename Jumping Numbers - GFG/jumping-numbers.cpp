//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    long long longest(long long n, long long x)
    {
        if (n > x)
        return 0;
        long long ans = n;
        int r = n % 10;
        long long a, b;
        if (r != 0)
        {
            a = n*10 + r - 1;
            ans = max(ans, longest(a, x));
        }
        if (r != 9)
        {
            b = n*10 + r + 1;
            ans = max(ans, longest(b, x));
        }
        return ans;
    }
    long long jumpingNums(long long X) {
        // code here
        long long ans = 0;
        for (int i = 1; i <= 9; i++)
        {
            ans = max(ans, longest(i, X));
        }
        return ans;
    }
};



//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long X;
        
        cin>>X;

        Solution ob;
        cout << ob.jumpingNums(X) << endl;
    }
    return 0;
}
// } Driver Code Ends