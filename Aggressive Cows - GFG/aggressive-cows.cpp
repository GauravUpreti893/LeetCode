//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
public:

    int solve(int n, int k, vector<int> &stalls) {
    
        // Write your code here
        int hi = 1e9, lo = 0, mid, ans = 0;
        sort(stalls.begin(), stalls.end());
        while (lo <= hi)
        {
            mid = lo + (hi - lo)/2;
            // cout<<lo<<" "<<mid<<" "<<hi<<endl;
            int t = k - 1;
            int prev = stalls[0];
            for (int i = 1; i < n; i++)
            {
                if (stalls[i] - prev >= mid)
                {
                    t--;
                    if (!t)
                    break;
                    prev = stalls[i];
                }
            }
            if (!t)
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