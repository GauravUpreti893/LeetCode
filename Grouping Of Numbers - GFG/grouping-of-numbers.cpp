//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int maxGroupSize(int arr[], int N, int K) {
        // code here
        unordered_map<int, int> mp;
        for (int i = 0; i < N; i++)
        {
            mp[arr[i] % K]++;
        }
        int ans = 0;
        if (mp[0])
        ans++;
        int n = ceil(K/2.0);
        for (int i = 1; i < n; i++)
        {
            ans += max(mp[i], mp[K - i]);
        }
        if (K%2 == 0 && mp[K/2])
        ans++;
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N,K;
        
        cin>>N>>K;
        int arr[N];
        
        for(int i=0; i<N; i++)
            cin>>arr[i];

        Solution ob;
        cout << ob.maxGroupSize(arr,N,K) << endl;
    }
    return 0;
}
// } Driver Code Ends