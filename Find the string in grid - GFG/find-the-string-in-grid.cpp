//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
	vector<vector<int>>searchWord(vector<vector<char>>grid, string word){
	    // Code here
	    int n = grid.size(), m = grid[0].size();
	    vector<vector<int>> ans;
	    int size = word.size();
	    vector<pair<int, int>> xy{{0, 1}, {0, -1}, {1, 0}, {-1, 0}, {1, 1}, {1, -1}, {-1, 1}, {-1, -1}};
	    for (int i = 0; i < n; i++)
	    {
	        for (int j = 0; j < m; j++)
	        {
	            if (grid[i][j] == word[0])
	            {
	                for (int k = 0; k < 8; k++)
	                {
	                    int x = i + xy[k].first;
                        int y = j + xy[k].second;
                        bool flag = true;
                        for (int a = 1; a < size; a++)
                        {
                            if (x < 0 || x == n || y < 0 || y == m || (grid[x][y] != word[a]))
                            {
                                flag = false;
                                break;
                            }
                            x += xy[k].first;
                            y += xy[k].second;
                        }
                        if (flag)
                        {
                             ans.push_back({i, j});
                             break;
                        }
	                }
	            }
	        }
	    }
	    return ans;
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<char>>grid(n, vector<char>(m,'x'));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++)
				cin >> grid[i][j];
		}
		string word;
		cin >> word;
		Solution obj;
		vector<vector<int>>ans = obj.searchWord(grid, word);
		if(ans.size() == 0)
		{
		    cout<<"-1\n";
		}
		else
		{
		    for(auto i: ans){
			for(auto j: i)
				cout << j << " ";
			cout << "\n";
		    }
		}
		
		
	}
	return 0;
}
// } Driver Code Ends