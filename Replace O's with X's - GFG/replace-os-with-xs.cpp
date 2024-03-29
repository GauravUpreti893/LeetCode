//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    void dfs(vector<vector<char>> &mat, int i, int j)
    {
        vector<pair<int, int>> xy{{0, 1}, {1, 0}, {-1, 0}, {0, -1}};
        mat[i][j] = '$';
        int n = mat.size(), m = mat[0].size();
        for (int k = 0; k < 4; k++)
        {
            int x = i + xy[k].first;
            int y = j + xy[k].second;
            if (x >= 0 && x < n && y >= 0 && y < m && mat[x][y] == 'O')
            dfs(mat, x, y);
        }
        return;
    }
    vector<vector<char>> fill(int n, int m, vector<vector<char>> mat)
    {
        // code here
        for (int i = 0; i < n; i++)
        {
            if (mat[i][0] == 'O')
            dfs(mat, i, 0);
            if (mat[i][m - 1] == 'O')
            dfs(mat, i, m - 1);
        }
        for (int i = 0; i < m; i++)
        {
            if (mat[0][i] == 'O')
            dfs(mat, 0, i);
            if (mat[n - 1][i] == 'O')
            dfs(mat, n - 1, i);
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (mat[i][j] == 'O')
                mat[i][j] = 'X';
                else if (mat[i][j] == '$')
                mat[i][j] = 'O';
            }
        }
        return mat;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        vector<vector<char>> mat(n, vector<char>(m, '.'));
        for(int i = 0;i < n;i++)
            for(int j=0; j<m; j++)
                cin>>mat[i][j];
        
        Solution ob;
        vector<vector<char>> ans = ob.fill(n, m, mat);
        for(int i = 0;i < n;i++) {
            for(int j = 0;j < m;j++) {
                cout<<ans[i][j]<<" ";
            }
            cout<<"\n";
        }
    }
    return 0;
}
// } Driver Code Ends