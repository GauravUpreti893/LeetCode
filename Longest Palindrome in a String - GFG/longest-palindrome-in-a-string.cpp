//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    string longestPalin (string S) {
        // code here
        int n = S.size();
        int ans = 1, idx = 0;
        for (int i = 0; i < n; i++)
        {
            int j = i - 1, k = i + 1;
            while (j >= 0 && k < n && S[j] == S[k])
            {
                j--;
                k++;
            }
            if (k - j - 1 > ans)
            {
                ans = k - j - 1;
                idx = j + 1;
            }
            j = i - 1, k = i;
            while (j >= 0 && k < n && S[j] == S[k])
            {
                j--;
                k++;
            }
            if (k - j - 1 > ans)
            {
                ans = k - j - 1;
                idx = j + 1;
            }
        }
        string s;
        for (int i = idx; i < idx + ans; i++)
        s += S[i];
        return s;
    }
};

//{ Driver Code Starts.

int main()
{
    int t; cin >> t;
    while (t--)
    {
        string S; cin >> S;
        
        Solution ob;
        cout << ob.longestPalin (S) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends