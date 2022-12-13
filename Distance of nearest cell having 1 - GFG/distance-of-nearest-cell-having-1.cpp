//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution 
{
    public:
    //Function to find distance of nearest 1 in the grid for each cell.
	vector<vector<int>>nearest(vector<vector<int>>grid)
	{
	    // Code here
	    queue<vector<int>> q;
	    vector<int> v(3);
	    int n = grid.size(), m = grid[0].size();
	    vector<vector<int>> dis(n, vector<int> (m, -1));
	    for (int i = 0; i < n; i++)
	    {
	        for (int j = 0; j < m; j++)
	        {
	            if (grid[i][j])
	            {
	                v[0] = i;
	                v[1] = j;
	                v[2] = 0;
	                q.push(v);
	                dis[i][j] = 0;
	            }
	        }
	    }
	    int x, y, d;
	    vector<pair<int, int>> xy{{1, 0}, {0, 1}, {-1, 0}, {0, -1}};
	    while (!q.empty())
	    {
	        v = q.front();
	        q.pop();
	        v[2]++;
	        for (int i = 0; i < 4; i++)
	        {
	            x = v[0] + xy[i].first;
	            y = v[1] + xy[i].second;
	            if (x >= 0 && y >= 0 && x < n && y < m && dis[x][y] == -1)
	            {
	                dis[x][y] = v[2];
	                vector<int> vec{x, y, v[2]};
	                q.push(vec);
	            }
	        }
	        
	    }
	    return dis;
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>>grid(n, vector<int>(m, -1));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> grid[i][j];
			}
		}
		Solution obj;
		vector<vector<int>> ans = obj.nearest(grid);
		for(auto i: ans){
			for(auto j: i){
				cout << j << " ";
			}
			cout << "\n";
		}
	}
	return 0;
}
// } Driver Code Ends