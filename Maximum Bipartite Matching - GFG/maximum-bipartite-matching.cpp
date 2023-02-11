//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
    bool available(int per, vector<vector<int>> &g, vector<bool> &vis, vector<int> &job)
    {
        int n = g[0].size();
        for (int i = 0; i < n; i++)
        {
            if (!vis[i] && g[per][i])
            {
                vis[i] = 1;
                if (job[i] == -1 || available(job[i], g, vis, job))
                {
                    job[i] = per;
                    return true;
                }
            }
        }
        return false;
    }
	int maximumMatch(vector<vector<int>>&G){
	    // Code here
	    int m = G.size(), n = G[0].size();
	    int ans = 0;
	    vector<int> job(n, -1);
	    for (int i = 0; i < m; i++)
	    {
	        vector<bool> vis(n, false);
	        if (available(i, G, vis, job))
	        ans++;
	    }
	    return ans;
	}

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int m, n;
		cin >> m >> n;
		vector<vector<int>>G(m, vector<int>(n, 0));
		for(int i = 0; i < m; i++){
			for(int j = 0; j < n; j++)
				cin >> G[i][j];
		}
		Solution obj;
		int ans = obj.maximumMatch(G);
		cout << ans << "\n";    
	}
	return 0;
}
// } Driver Code Ends