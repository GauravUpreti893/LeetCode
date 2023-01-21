//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int minVal(int a, int b) {
        // code here
        int count = 0;
        while (b)
        {
            if (b & 1)
            count++;
            b >>= 1;
        }
        int n = 0;
        for (int i = 29; i >= 0; i--)
        {
            if (a & (1 << i))
            {
                n += 1 << i;
                count--;
                if (!count)
                return n;
            }
        }
        int x = 0;
        while (count)
        {
            if (!(n & (1 << x)))
            {
                n += 1 << x;
                count--;
            }
            x++;
        }
        return n;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;

        Solution ob;
        cout << ob.minVal(a, b);

        cout << "\n";
    }

    return 0;
}
// } Driver Code Ends