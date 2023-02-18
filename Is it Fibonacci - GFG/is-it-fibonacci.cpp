//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    long long solve(int N, int K, vector<long long> GeekNum) {
        // code here
        long long sum = 0;
        if (N <= K)
        return GeekNum[N - 1];
        for (int i = 0; i < K; i++)
        {
            sum += GeekNum[i];
        }
        for (int i = K + 2; i <= N; i++)
        {
            long long sub = GeekNum[(i - 2) % K];
            GeekNum[(i - 2) % K] = sum;
            sum += sum - sub;
        }
        return sum;
    }
};


//{ Driver Code Starts.

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, K;
        cin >> N >> K;

        vector<long long> GeekNum(K);

        for (int i = 0; i < K; i++) cin >> GeekNum[i];

        Solution ob;
        cout << ob.solve(N, K, GeekNum) << "\n";
    }
    return 0;
}

// } Driver Code Ends