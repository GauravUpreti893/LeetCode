//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int knightInGeekland(int start_x,int start_y,vector<vector<int>> &arr){
        // Code here
        int n = arr.size(), m = arr[0].size();
        vector<vector<bool>> vis(n, vector<bool> (m, 0));
        vector<int> points;
        queue<pair<int, int>> q;
        q.push({start_x, start_y});
        int steps = 0;
        vector<pair<int, int>> xy{{-2, -1}, {-2, 1}, {2, -1}, {2, 1}, {-1, -2}, {-1, 2}, {1, -2}, {1, 2}};
        vis[start_x][start_y] = 1;
        while (!q.empty())
        {
            int k = q.size();
            int point = 0;
            for (int i = 0; i < k; i++)
            {
                int a = q.front().first;
                int b = q.front().second;
                q.pop();
                point += arr[a][b];
                for (int j = 0; j < 8; j++)
                {
                    int x = a + xy[j].first;
                    int y = b + xy[j].second;
                    if (x >= 0 && x < n && y >= 0 && y < m && !vis[x][y])
                    {
                        vis[x][y] = 1;
                        q.push({x, y});
                    }
                }
            }
            points.push_back(point);
        }
        steps = points.size();
        int ans = 0, mx = 0;
        for (int i = steps - 1; i >= 0; i--)
        {
            if (i + points[i] < steps)
            points[i] += points[i + points[i]];
            if (points[i] >= mx)
            {
                mx = points[i];
                ans = i;
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
        int n,m,start_x,start_y;
        cin>>n>>m>>start_x>>start_y;
        vector<vector<int>> arr(n,vector<int>(m));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>arr[i][j];
            }
        }
        Solution ob;
        cout<<ob.knightInGeekland(start_x,start_y,arr)<<endl;
    }
}
// } Driver Code Ends