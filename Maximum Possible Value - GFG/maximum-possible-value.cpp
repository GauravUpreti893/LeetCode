//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution {
  public:
    long long maxPossibleValue(int n,vector<int> A, vector<int> B) {
        // code here
        long long ans = 0;
        int mn = 1e9, count = 0;
        for (int i = 0; i < n; i++)
        {
            if (B[i] % 2)
            B[i]--;
            count += B[i];
            ans += A[i]*B[i];
            if (B[i])
            mn = min(mn, A[i]);
        }
        if (count % 4)
        ans -= mn*2;
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin>>N;
        vector<int> A(N), B(N);
        for(int i=0;i<N;i++){
            cin>>A[i];
        }
        for(int i=0;i<N;i++){
          cin>>B[i];
        }
        Solution obj;
        auto ans = obj.maxPossibleValue(N,A,B);
        cout<<ans<<endl;
    }
} 
// } Driver Code Ends