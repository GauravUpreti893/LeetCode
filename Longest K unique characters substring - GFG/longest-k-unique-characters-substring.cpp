//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    int longestKSubstr(string s, int k) {
    // your code here
        vector<int> freq(26, 0);
        int count = 0, i = 0, n = s.size();
        while (i < n && count != k)
        {
            if (!freq[s[i] - 'a'])
            count++;
            freq[s[i++] - 'a']++;
        }
        if (count != k)
        return -1;
        int ans = i, st = 0;
        while (i < n)
        {
            if (!freq[s[i] - 'a'])
            {
                freq[s[i] - 'a'] = 1;
                ans = max(ans, i - st);
                while (freq[s[st] - 'a'] != 1)
                {
                    freq[s[st++] - 'a']--;
                }
                freq[s[st++] - 'a'] = 0;
            }
            else
            freq[s[i] - 'a']++;
            i++;
        }
        return max(ans, n - st);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int k;
        cin >> k;
        Solution ob;
        cout << ob.longestKSubstr(s, k) << endl;
    }
}

// } Driver Code Ends