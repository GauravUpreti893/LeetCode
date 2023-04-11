//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
public:
    int solve(int a, int b, int c) {
        // code here
        int sum = a + b + c;
        int temp = a;
        int ans = -1;
        a = max({a, b, c});
        c = min({temp, b, c});
        int groups = 0;
        b = sum - a - c;
        ans = min(a, b)*2;
        groups = ans/2;
        a -= b;
        int x = min(a, c)*2;
        ans += x;
        groups += x/2;
        a -= x;
        c -= x;
        if (a)
        {
            // ans += a;
            if (a <= 2)
            return sum;
        }
        else
        {
            // ans += c;
            if (c <= 2)
            return sum;
        }
        groups++;
        ans += groups;
        // cout<<ans<<endl;
        if (ans >= sum)
        return sum;
        // cout<<ans<<endl;
        ans = c*3;
        a -= c;
        b -= c;
        ans += b*2;
        a -= b;
        if (a <= 2)
        return sum;
        return -1;
    }
};

//{ Driver Code Starts.

int main() {
    int T;
    cin >> T;
    while (T--) {
        int a, b, c;
        cin >> a >> b >> c;

        Solution ob;
        int ans = ob.solve(a, b, c);
     

        cout <<  ans << "\n";
    }
    return 0;
}
// } Driver Code Ends