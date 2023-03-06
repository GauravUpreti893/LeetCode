//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {

  public:
    int noConseBits(int n) {
        // code here
        int count = 0;
        for (int i = 29; i >= 0; i--)
        {
            if (n & (1<< i))
            count++;
            else
            count = 0;
            if (count == 3)
            {
                count = 0;
                int x = 1<<i;
                x = ~x;
                n = n & x;
            }
        }
        return n;
    }
};


//{ Driver Code Starts.

int main() {

    int tt;
    cin >> tt;
    Solution sol;
    while (tt--) {

        int n;
        cin >> n;
        int ans = sol.noConseBits(n);
        cout << ans << '\n';
    }

    return 0;
}

// } Driver Code Ends