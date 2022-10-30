//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
	long long int NoOfChicks(int n){
	    // Code here
	    vector<long long> ans(n);
	    ans[0] = 1;
	    long long tot = 1;
	    for (int i = 1; i < min(n, 6); i++)
	    {
	        ans[i] = 2*tot;
	        tot *= 3;
	    }
	    for (int i = 6; i < n; i++)
	    {
	        tot -= ans[i - 6];
	        ans[i] = tot*2;
	        tot *= 3;
	    }
	    return tot;
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int N;
		cin >> N;
		Solution obj;
		long long int ans = obj.NoOfChicks(N);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends