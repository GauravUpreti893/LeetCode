//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    int minOperation(string s) {
        // code here
        int n = s.size();
        int mx = 0;
        string str;
        for (int i = 0; i < n; i++)
        {
            str += s[i];
            int j = i + 1, k = 0, m = str.size();
            if (2*m > n)
            break;
            bool flag = true;
            for (int k = 0; k < m; k++)
            {
                if (s[j++] != str[k])
                {
                    flag = false;
                    break;
                }
            }
            if (flag)
            mx = max(mx, m - 1);
        }
        return n - mx;
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
        cout << ob.minOperation(s) << "\n";
    }
    return 0;
}

// } Driver Code Ends