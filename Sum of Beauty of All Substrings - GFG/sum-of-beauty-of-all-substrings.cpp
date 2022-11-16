//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int beautySum(string s) {
        // Your code goes here
        int n = s.size();
        int beauty = 0, mx, mn;
        for (int i = 0; i < n; i++)
        {
            vector<int> freq(26, 0);
            for (int j = i; j < n; j++)
            {
                freq[s[j] - 'a']++;
                mx = freq[0];
                mn;
                if (freq[0])
                mn = freq[0];
                else
                mn = 501;
                for (int  k= 1; k < 26; k++)
                {
                    mx = max(mx, freq[k]);
                    if (freq[k])
                    mn = min(mn, freq[k]);
                }
                beauty += mx - mn;
            }
        }
        return beauty;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution obj;
        cout << obj.beautySum(s) << endl;
    }
    return 0;
}
// } Driver Code Ends