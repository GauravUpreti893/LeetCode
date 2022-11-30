//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	void partition(vector<vector<int>>&ans, vector<int>&v, int n, int idx)
	{
	    if (n <= 0 || idx == 0)
	    return;
	    v.push_back(idx);
	    n -= idx;
	    if (!n)
	    {
	        ans.push_back(v);
	    }
	    else
	    {
	        partition(ans, v, n, idx);
	    }
	    n += idx;
	    v.pop_back();
	    idx--;
	    if (idx)
	    partition(ans, v, n, idx);
	    return;
	}
    vector<vector<int>> UniquePartitions(int n) {
        // Code here
        vector<vector<int>> ans;
        vector<int> v;
        int idx = n;
        partition(ans, v, n, idx);
        return ans;
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		Solution ob;
		vector<vector<int>> ans = ob.UniquePartitions(n);
    	for(auto i : ans)
    		for(auto j: i)
    			cout << j <<" ";
    	cout << "\n";
	}  
	return 0;
}
// } Driver Code Ends