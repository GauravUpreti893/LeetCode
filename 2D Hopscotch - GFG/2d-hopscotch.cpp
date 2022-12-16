//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int hopscotch(int n, int m, vector<vector<int>> mat, int ty, int i, int j)
    {
        // code here
        int ans = 0, x, y;
        if (ty)
        {
            if (j % 2)
            {
                vector<pair<int, int>> xy{{-1, 1}, {-2, 0}, {-1, -1}, {-1, -2}, {0, -2}, {1, -2}, {2, -1}, {2, 0}, {2, 1}, {1, 2}, {0, 2}, {-1, 2}};
                for (int k = 0; k < 12; k++)
                {
                    x = i + xy[k].first;
                    y = j + xy[k].second;
                    if (x >= 0 && y >= 0 && x < n && y < m)
                    ans += mat[x][y];
                }
            }
            else
            {
                vector<pair<int, int>> xy{{-2, 0}, {-2, 1}, {-1, 2}, {0, 2}, {1, 2}, {1, 1}, {2, 0}, {1, -1}, {1, -2}, {0, -2}, {-1, -2}, {-2, -1}};
                for (int k = 0; k < 12; k++)
                {
                    x = i + xy[k].first;
                    y = j + xy[k].second;
                    if (x >= 0 && y >= 0 && x < n && y < m)
                    ans += mat[x][y];
                }
            }
        }
        else
        {
            if (j % 2)
            {
                vector<pair<int, int>> xy{{0, -1}, {0, 1}, {-1, 0}, {1, 0}, {1, -1}, {1, 1}};
                for (int k = 0; k < 6; k++)
                {
                    x = i + xy[k].first;
                    y = j + xy[k].second;
                    if (x >= 0 && y >= 0 && x < n && y < m)
                    ans += mat[x][y];
                }
            }
            else
            {
                vector<pair<int, int>> xy{{-1, -1}, {-1, 0}, {-1, 1}, {0, -1}, {0, 1}, {1, 0}};
                for (int k = 0; k < 6; k++)
                {
                    x = i + xy[k].first;
                    y = j + xy[k].second;
                    if (x >= 0 && y >= 0 && x < n && y < m)
                    ans += mat[x][y];
                }
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m, ty, i, j;
        cin>>n>>m;
        vector<vector<int>> mat(n, vector<int>(m, 0));
        for(int i = 0;i < n;i++)
            for(int j = 0;j < m;j++)
                cin>>mat[i][j];
        cin>>ty>>i>>j;
        
        Solution ob;
        cout<<ob.hopscotch(n, m, mat, ty, i, j)<<"\n";
    }
    return 0;
}
// } Driver Code Ends