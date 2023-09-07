//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int minimumMultiplications(vector<int>& arr, int start, int end) {
        // code here
        if (start == end)
        return 0;
        vector<bool> vis(1e5, 0);
        queue<int> q;
        int m = arr.size(), mod = 1e5;
        q.push(start);
        int steps = 1;
        while (!q.empty())
        {
            int n = q.size();
            for (int i = 0; i < n; i++)
            {
                int par = q.front();
                q.pop();
                for (int j = 0; j < m; j++)
                {
                    int x = (arr[j] * par) % mod;
                    if (x == end)
                    return steps;
                    if (!vis[x])
                    {
                        vis[x] = 1;
                        q.push(x);
                    }
                }
            }
            steps++;
        }
        return -1;
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        int start, end;
        cin >> start >> end;
        Solution obj;
        cout << obj.minimumMultiplications(arr, start, end) << endl;
    }
}

// } Driver Code Ends