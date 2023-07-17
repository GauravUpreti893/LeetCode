//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
	public:
		string FirstNonRepeating(string A){
		    // Code here
		    vector<int> pos(26, 0);
		    int n = A.size();
		    for (int i = 0; i < n; i++)
		    {
		        int idx = A[i] - 'a';
		        if (pos[idx])
		        pos[idx] = -1;
		        else
		        pos[idx] = i + 1;
		        int mn = n + 1, val = 0;
		        for (int j = 0; j < 26; j++)
		        {
		            if (pos[j] > 0 && pos[j] < mn)
		           {
		               mn = pos[j];
		               val = j;
		           }
		        }
		        if (mn == (n + 1))
		        A[i] = '#';
		        else
		        A[i] = val + 'a';
		    }
		    return A;
		}

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string A;
		cin >> A;
		Solution obj;
		string ans = obj.FirstNonRepeating(A);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends