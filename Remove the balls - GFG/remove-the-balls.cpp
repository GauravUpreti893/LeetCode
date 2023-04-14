//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int finLength(int N, vector<int> &color, vector<int>& radius) {
        int j = 0;
        for (int i = 1; i < N; i++)
        {
            pair<int, int> p1 = {color[i], radius[i]};
            pair<int, int> p2 = {color[j], radius[j]};
            if (p1 == p2)
            {
                j--;
                if (j < 0 && i < N - 1)
                {
                    j = 0;
                    i++;
                    color[j] = color[i];
                    radius[j] = radius[i];
                }
            }
            else
            {
                j++;
                color[j] = color[i];
                radius[j] = radius[i];
            }
        }
        return j + 1;
    }
};


//{ Driver Code Starts.
int main() {

    int tt;
    cin >> tt;
    Solution sol;
    while (tt--) {

        int n;
        cin >> n;
        vector<int> color(n), radius(n);
        for (int i = 0; i < n; i++) cin >> color[i];
        for (int i = 0; i < n; i++) cin >> radius[i];
        int ans = sol.finLength(n, color, radius);
        cout << ans << "\n";
    }

    return 0;
}

// } Driver Code Ends