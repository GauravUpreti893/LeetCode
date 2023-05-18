//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
void dfs(vector<vector<int>> &matrix, int a, int b, vector<vector<bool>> &vis)
{
    int n = matrix.size(), m = matrix[0].size();
    vector<pair<int, int>> xy{{0, 1}, {1, 0}, {-1, 0}, {0, -1}};
    vis[a][b] = 1;
    for (int i = 0; i < 4; i++)
    {
        int x = a + xy[i].first;
        int y = b + xy[i].second;
        if (x >= 0 && x < n && y >= 0 && y < m && matrix[x][y] && !vis[x][y])
        {
            dfs(matrix, x, y, vis);
        }
    }
    return;
}
class Solution {
    public:
    int closedIslands(vector<vector<int>>& matrix, int n, int m) {
        // Code here
        queue<pair<int, int>> q;
        for (int i = 0; i < n; i++)
        {
            if (matrix[i][0])
            q.push({i, 0});
            if (matrix[i][m - 1])
            q.push({i, m - 1});
        }
        for (int i = 0; i < m; i++)
        {
            if (matrix[0][i])
            q.push({0, i});
            if (matrix[n - 1][i])
            q.push({n - 1, i});
        }
        vector<pair<int, int>> xy{{0, 1}, {1, 0}, {-1, 0}, {0, -1}};
        vector<vector<bool>> vis(n, vector<bool> (m , 0));
        while (!q.empty())
        {
            int a = q.front().first;
            int b = q.front().second;
            q.pop();
            vis[a][b] = 1;
            for (int i = 0; i < 4; i++)
            {
                int x = a + xy[i].first;
                int y = b + xy[i].second;
                if (x >= 0 && x < n && y >= 0 && y < m && matrix[x][y] && !vis[x][y])
                {
                    q.push({x, y});
                }
            }
        }
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (matrix[i][j] && !vis[i][j])
                {
                    dfs(matrix, i, j, vis);
                    ans++;
                }
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
	int t;
	cin>>t;
	while(t--)
	{
        int N, M;
        cin >> N >> M;
        vector<vector<int>>matrix(N, vector<int>(M, 0));
        for(int i=0; i<N; i++)
            for(int j=0; j<M; j++)
                cin >> matrix[i][j];
                
        Solution obj;
        int ans = obj.closedIslands(matrix, N, M);
        cout << ans << "\n";
    }
	
	return 0;
	
}


// } Driver Code Ends