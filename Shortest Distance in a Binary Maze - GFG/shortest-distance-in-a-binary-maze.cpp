//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
  typedef pair<int,int> pii;
 vector<vector<int>> dir={{1,0},{-1,0},{0,1},{0,-1}};
    int shortestPath(vector<vector<int>> &grid, pair<int, int> source,
                     pair<int, int> destination) {
        // code here
        queue<pair<pii,int>> q;
        q.push({source,0});
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>> vis(grid.size()+1,vector<int>(grid[0].size()+1,0));
        vis[source.first][source.second]=1;
        while(!q.empty())
        {
            pair<int,int> p=q.front().first;
            int c=q.front().second;
            q.pop();
            
            if(p==destination)
            {
                return c;
            }
            int x=p.first;
            int y=p.second;
            for(int i=0;i<4;i++)
            {
                int nx=x+dir[i][0];
                int ny=y+dir[i][1];
                if(nx>=0 && ny>=0 && nx<n && ny<m && vis[nx][ny]==0 &&  grid[nx][ny])
                {
                    q.push({{nx,ny},c+1});   
                    vis[nx][ny]=1;
                }
            }
        }
        return-1;
                         
}
};

//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> grid(n, vector<int>(m));

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }

        pair<int, int> source, destination;
        cin >> source.first >> source.second;
        cin >> destination.first >> destination.second;
        Solution obj;
        cout << obj.shortestPath(grid, source, destination) << endl;
    }
}

// } Driver Code Ends