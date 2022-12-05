//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int shotestPath(vector<vector<int>>& mat, int n, int m, int k) {
        // code here
        queue<vector<int>> q;
        vector<int> v{0, 0, 0, k};
        q.push(v);
        vector<pair<int, int>> xy{{1, 0}, {0, 1}, {-1, 0}, {0, -1}};
        int x, y, l, left;
        vector<vector<int>> dp(n, vector<int>(m, -1));
        while (!q.empty())
        {
            v = q.front();
            q.pop();
            x = v[0];
            y = v[1];
            l = v[2];
            left = v[3];
            if (x == n - 1 && y == m - 1)
            return l;
            for (int i = 0; i < 4; i++)
            {
                v[0] = x + xy[i].first;
                v[1] = y + xy[i].second;
                v[2] = l + 1;
                v[3] = left;
                if (v[0] == n || v[1] == m || v[0] < 0 || v[1] < 0)
                continue;
                if (mat[v[0]][v[1]])
                {
                    if (!left)
                    continue;
                    else
                    v[3]--;
                }
                if (dp[v[0]][v[1]] >= v[3])
                continue;
                dp[v[0]][v[1]] = v[3];
                q.push(v);
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
        int n, m, k, x;
        
        cin>>n>>m>>k;
        vector<vector<int>> mat;
    
        for(int i=0; i<n; i++)
        {
            vector<int> row;
            for(int j=0; j<m; j++)
            {
                cin>>x;
                row.push_back(x);
            }
            mat.push_back(row);
        }

        Solution ob;
        cout<<ob.shotestPath(mat,n,m,k);
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends