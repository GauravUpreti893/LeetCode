//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int findMatching(string haystack, string needle) {
        // Code here
        int n = haystack.size(), m = needle.size();
        vector<int> lis(m, 0);
        int i = 0;                               
        for (int j = 1; j < m; j++)
        {
            if (needle[j] == needle[i])
            {
                lis[j] = ++i;
            }
            else
            {
                if (i)
                {
                    i = lis[i - 1];
                    j--;
                }
            }
        }
        i = 0;
        for (int j = 0; j < n; j++)
        {
            if (haystack[j] == needle[i])
            {
                i++;
                if (i == m)
                return j - m + 1;
            }
            else
            {
                if (i)
                {
                    i = lis[i - 1];
                    j--;
                }
            }
        }
        return -1;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string text, pat;
        cin >> text >> pat;
        Solution obj;
        cout << obj.findMatching(text, pat) << endl;
    }
    return 0;
}
// } Driver Code Ends