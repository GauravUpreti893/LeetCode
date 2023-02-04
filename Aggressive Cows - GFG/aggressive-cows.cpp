//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
public:
bool check(vector<int> &pos, int mn, int k)
{
	k--;
	int n = pos.size();
	int prev = pos[0];
	for (int i = 1; i < n; i++)
	{
		if (pos[i] - prev >= mn)
		{
			k--;
			if (k == 0)
			{
				return true;
			}
			prev = pos[i];
		}
		
	}
	if (k == 0)
    return true;
	else
	return false;
}
int solve(int n, int k, vector<int> &pos) {

    // Write your code here
    int lo = 1, hi = 1e9, mid, ans;
	sort(pos.begin(), pos.end());
	while (lo <= hi)
	{
		mid = lo + (hi - lo)/2;
		if (check(pos, mid, k))
		{
			ans = mid;
			lo = mid + 1;
		}
		else
        {
            hi = mid - 1;
        }
	}
    return ans;
}
};

//{ Driver Code Starts.

int main() {
    int t = 1;
    cin >> t;

    // freopen ("output_gfg.txt", "w", stdout);

    while (t--) {
        // Input

        int n, k;
        cin >> n >> k;

        vector<int> stalls(n);
        for (int i = 0; i < n; i++) {
            cin >> stalls[i];
        }
        // char ch;
        // cin >> ch;

        Solution obj;
        cout << obj.solve(n, k, stalls) << endl;

        // cout << "~\n";
    }
    // fclose(stdout);

    return 0;
}
// } Driver Code Ends