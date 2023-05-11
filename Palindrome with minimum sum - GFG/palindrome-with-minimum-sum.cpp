//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int minimumSum(string s) {
        // code here
        int n = s.size();
        for (int i = 0; i < n/2; i++)
        {
            if (s[i] != '?' && s[n - 1 - i] != '?')
            {
                if (s[i] != s[n - 1 - i])
                return -1;
            }
            else if (s[i] != '?')
            {
                s[n - 1 - i] = s[i];
            }
            else if (s[n - 1 - i] != '?')
            {
                s[i] = s[n - 1 - i];
            }
        }
        int ans = 0;
        int i = 0;
        while (i < n && s[i] == '?')
        i++;
        if (i == n)
        return 0;
        char prev = s[i++];
        for (; i < n/2; i++)
        {
            if (s[i] != '?')
            {
                if (s[i] != prev)
                ans += abs(s[i] - prev);
                prev = s[i];
            }
        }
        return 2*ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;

        Solution ob;
        int ans = ob.minimumSum(s);
        cout << ans;
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends