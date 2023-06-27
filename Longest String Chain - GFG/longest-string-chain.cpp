//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

bool compare(string &a, string &b)
{
    if (a.size() < b.size())
    return true;
    else if (a.size() > b.size())
    return false;
    return a < b;
}
class Solution {
  public:
    bool check(string &s1, string &s2)
    {
        int n = s1.size(), m = s2.size();
        if (n - m != 1)
        return false;
        int i = 0, j = 0;
        bool flag = true;
        while (j < m)
        {
            if (s1[i] != s2[j])
            {
                if (flag)
                {
                    i++;
                    flag = false;
                }
                else
                return false;
            }
            else
            {
                i++;
                j++;
            }
        }
        return true;
    }
    int longestChain(int n, vector<string>& words) {
        sort(words.begin(), words.end(), compare);
        int ans = 1;
        vector<int> dp(n, 1);
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < i; j++)
            {
                if (check(words[i], words[j]))
                {
                    dp[i] = max(dp[i], 1 + dp[j]);
                    ans = max(ans, dp[i]);
                }
            }
        }
        return ans;
        // Code here
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<string> words(N);
        for (int i = 0; i < N; i++) {
            cin >> words[i];
        }
        Solution obj;
        cout << obj.longestChain(N, words) << "\n";
    }
    return 0;
}
// } Driver Code Ends