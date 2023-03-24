//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution {
  public:
    string removeReverse(string S) {
        // code here
        int n = S.size();
        vector<int> freq(26, 0);
        for (int i = 0; i < n; i++)
        {
            freq[S[i] - 'a']++;
        }
        int i = 0, j = n - 1;
        vector<bool> marked(n, 0);
        bool direc = 0;
        while (i <= j)
        {
            if (!direc)
            {
                if (freq[S[i] - 'a'] > 1)
                {
                    marked[i] = 1;
                    freq[S[i] - 'a']--;
                    direc = 1;
                }
                i++;
            }
            else
            {
                if (freq[S[j] - 'a'] > 1)
                {
                    marked[j] = 1;
                    freq[S[j] - 'a']--;
                    direc = 0;
                }
                j--;
            }
            
        }
        string ans;
        for (int i = 0; i < n; i++)
        {
            if (!marked[i] && !direc)
            ans += S[i];
            else if (!marked[i] && direc)
            ans = S[i] + ans;
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin>>S;
        Solution obj;
        auto ans = obj.removeReverse(S);
        cout<<ans<<endl;
    }
}
// } Driver Code Ends