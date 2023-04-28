//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    vector<vector<int>> chefAndWells(int n,int m,vector<vector<char>> &c){
        // Code here
        vector<pair<int, int>> xy{{0, 1}, {1, 0}, {-1, 0}, {0, -1}};
        queue<pair<int, int>> q;
        vector<vector<bool>> vis(n, vector<bool> (m , 0));
        vector<vector<int>> dis(n, vector<int> (m, -1));    
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (c[i][j] == 'W')
                {
                    q.push({i, j});
                    dis[i][j] = 0;
                    vis[i][j] = 1;
                }
                else if (c[i][j] == 'N')
                {
                    vis[i][j] = 1;
                    dis[i][j] = 0;
                }
                else if (c[i][j] == '.')
                {
                    dis[i][j] = 0;
                }
            }
        }
        int d = 0;
        while (!q.empty())
        {
            int k = q.size();
            for (int i = 0; i < k; i++)
            {
                int a = q.front().first;
                int b = q.front().second;
                q.pop();
                for (int j = 0; j < 4; j++)
                {
                    int x = a + xy[j].first;
                    int y = b + xy[j].second;
                    if (x >= 0 && x < n && y >= 0 && y < m && !vis[x][y])
                    {
                        vis[x][y] = 1;
                        q.push({x, y});
                        if (c[x][y] != '.')
                        dis[x][y] = 2*(d + 1);
                    }
                }
            }
            d++;
        }
        return dis;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<vector<char>> c(n,vector<char>(m));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>c[i][j];
            }
        }
        Solution ob;
        vector<vector<int>> res=ob.chefAndWells(n,m,c);
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cout<<res[i][j]<<" ";
            }
            cout<<endl;
        }
    }
}
// } Driver Code Ends