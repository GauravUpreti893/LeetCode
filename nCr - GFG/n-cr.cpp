//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int nCr(int n, int r){
        // code here
        if (n < r)
        return 0;
        vector<int> ncr(r + 1, 0);
        ncr[0] = 1;
        int mod = 1e9 + 7;
        for (int i = 1; i <= n; i++)
        {
            int s = min(i, r);
            for (int j = s; j > 0; j--)
            {
                ncr[j] = (ncr[j] + ncr[j - 1]) % mod;
            }
        }
        return ncr[r];
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, r;
        cin>>n>>r;
        
        Solution ob;
        cout<<ob.nCr(n, r)<<endl;
    }
    return 0;
}
// } Driver Code Ends