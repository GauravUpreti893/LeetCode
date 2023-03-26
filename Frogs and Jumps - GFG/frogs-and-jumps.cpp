//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int unvisitedLeaves(int N, int leaves, int frogs[]) {
        // Code here
        vector<bool> vis(leaves, 0);
        unordered_map<int, int> mp;
        for (int i = 0; i < N; i++)
        {
            if (frogs[i] == 1)
            return 0;
            mp[frogs[i]] = 1;
        }
        for (auto it = mp.begin(); it != mp.end(); it++)
        {
            int x = it->first;
            for (int j = x; j <= leaves; j += x)
            {
                vis[j - 1] = 1;
            }
        }
        int ans = 0;
        for (int i = 0; i < leaves; i++)
        {
            if (!vis[i])
            ans++;
        }
        return ans;
    }
};


//{ Driver Code Starts.


int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, leaves;
        cin >> N >> leaves;
        int frogs[N];
        for (int i = 0; i < N; i++) {
            cin >> frogs[i];
        }

        Solution ob;
        cout << ob.unvisitedLeaves(N, leaves, frogs) << endl;
    }
}
// } Driver Code Ends