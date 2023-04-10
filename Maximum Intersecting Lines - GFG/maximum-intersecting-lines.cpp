//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int maxIntersections(vector<vector<int>>& lines, int N) {
        // Code here
        int n = lines.size();
        priority_queue<int, vector<int>, greater<int>> pq;
        sort(lines.begin(), lines.end());
        int sub = 0;
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            while (!pq.empty() && pq.top() < lines[i][0])
            {
                pq.pop();
                sub++;
            }
            ans = max(ans, i + 1 - sub);
            pq.push(lines[i][1]);
        }
        // ans = max()
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<vector<int>> mat(N, vector<int>(2));
        for (int j = 0; j < 2; j++) {
            for (int i = 0; i < N; i++) {
                cin >> mat[i][j];
            }
        }
        Solution obj;
        cout << obj.maxIntersections(mat, N) << endl;
    }
}
// } Driver Code Ends