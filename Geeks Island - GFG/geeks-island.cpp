//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{   
public:
    void dfs(vector<vector<int>> &heights, vector<vector<bool>> &vis, int i, int j)
    {
        int n = heights.size(), m = heights[0].size();
        if (i && (heights[i - 1][j] >= heights[i][j]) && !vis[i - 1][j])
        {
            vis[i - 1][j] = 1;
            dfs(heights, vis, i - 1, j);
        }
        if (j && (heights[i][j - 1] >= heights[i][j]) && !vis[i][j - 1])
        {
            vis[i][j - 1] = 1;
            dfs(heights, vis, i, j - 1);
        }
        if (i < n - 1 && (heights[i + 1][j] >= heights[i][j]) && !vis[i + 1][j])
        {
            vis[i + 1][j] = 1;
            dfs(heights, vis, i + 1, j);
        }
        if (j < m - 1 && (heights[i][j + 1] >= heights[i][j]) && !vis[i][j + 1])
        {
            vis[i][j + 1] = 1;
            dfs(heights, vis, i, j + 1);
        }
        return;
    }
    int water_flow(vector<vector<int>> &heights,int N,int M){
    // Write your code here.
        int n = heights.size(), m = heights[0].size();
        vector<vector<bool>> vispac(n, vector<bool> (m, false)), visatl(n, vector<bool> (m, false));
        for (int i = 0; i < m; i++)
        {
            if (!vispac[0][i])
            {
                vispac[0][i] = 1;
                dfs(heights, vispac, 0, i);
            }
            if (!visatl[n - 1][i])
            {
                visatl[n - 1][i] = 1;
                dfs(heights, visatl, n - 1, i);
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (!vispac[i][0])
            {
                vispac[i][0] = 1;
                dfs(heights, vispac, i, 0);
            }
            if (!visatl[i][m - 1])
            {
                visatl[i][m - 1] = 1;
                dfs(heights, visatl, i, m - 1);
            }
        }
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (vispac[i][j] && visatl[i][j])
                ans++;
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
        int n,m;
        cin>>n>>m;
        vector<vector<int>> mat(n, vector<int>(m));
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                cin>>mat[i][j];
            }
        }
        Solution ob;
        cout << ob.water_flow(mat, n, m) << endl;
        
    }
}


// } Driver Code Ends