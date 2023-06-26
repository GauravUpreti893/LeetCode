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
        vector<int> prev(2, 1);
        int mod = 1e9 + 7;
        if (n < r)
        return 0;
        for (int i = 2; i <= n; i++)
        {
            vector<int> curr = {1};
            int m = prev.size();
            for (int j = 0; j < m - 1; j++)
            {
                curr.push_back((prev[j] + prev[j + 1]) % mod);
            }
            curr.push_back(1);
            prev = curr;
        }
        return prev[r];
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