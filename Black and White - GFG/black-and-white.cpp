//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

long long numOfWays(int n, int m);

int main() {
    // code
    int T;
    cin >> T;
    while (T--) {
        int n, m;
        cin >> n >> m;
        cout << numOfWays(n, m) << endl;
    }
    return 0;
}
// } Driver Code Ends


//Function to find out the number of ways we can place a black and a 
//white Knight on this chessboard such that they cannot attack each other.
long long numOfWays(int N, int M)
{
    // write code here
    long long n = N*M;
    long long ans = n*(n - 1), mod = 1e9 + 7;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            if (j && (i < N - 2))
            ans -= 2;
            if ((j != M - 1) && (i < N - 2))
            ans -= 2;
            if ((j > 1) && (i < N - 1))
            ans -= 2;
            if ((j < (M - 2)) && (i < N - 1))
            ans -= 2;
        }
    }
    
    return ans % mod;
}