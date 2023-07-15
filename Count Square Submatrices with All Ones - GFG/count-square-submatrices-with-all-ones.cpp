//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int countSquares(int n, int m, vector<vector<int>> &matrix) {
        // code here
        //dp[i][j] means, no of all 1 submatrix ending with ith row and jth col
        int ans = 0;
        for (int i = 0; i < m; i++)
        {
            ans += matrix[0][i];
        }
        for (int i = 1; i < n; i++)
        {
            ans += matrix[i][0];
        }
        for (int i = 1; i < n; i++)
        {
            for (int j = 1; j < m; j++)
            {
                if (matrix[i][j])
                {
                    matrix[i][j] = 1 + min({matrix[i - 1][j], matrix[i][j - 1], matrix[i - 1][j - 1]});
                    ans += matrix[i][j];
                }
            }
        }
        return ans;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, M;
        cin >> N >> M;

        vector<vector<int>> matrix(N, vector<int>(M));
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {
                cin >> matrix[i][j];
            }
        }
        Solution obj;
        cout << obj.countSquares(N, M, matrix) << endl;
    }
    return 0;
}
// } Driver Code Ends