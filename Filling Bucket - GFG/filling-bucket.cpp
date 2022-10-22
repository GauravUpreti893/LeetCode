//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int fillingBucket(int N) {
        // code here
        if (N == 1)
        return 1;
        int prev = 2;
        int prevprev = 1;
        int mod = 1e8;
        int sum;
        for (int i = 3; i <= N; i++)
        {
            sum = (prev + prevprev) % mod;
            prevprev = prev;
            prev = sum;
        }
        return prev;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;

        Solution ob;
        cout << ob.fillingBucket(N) << endl;
    }
    return 0;
}
// } Driver Code Ends