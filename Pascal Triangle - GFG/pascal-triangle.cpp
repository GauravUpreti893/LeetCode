//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;
#define ll long long

// } Driver Code Ends
// #define ll long long
class Solution{
public:
    vector<ll> nthRowOfPascalTriangle(int n) {
        // code here
        vector<ll> v;
        v.push_back(1);
        ll mod = 1e9 + 7;
        if (n == 1)
        {
            return v;
        }
        v.push_back(1);
        if (n == 2)
        {
            return v;
        }
        int m;
        for (int i = 2; i < n; i++)
        {
            vector<ll> temp(1, 1);
            for (int j = 0; j < i - 1; j++)
            {
                temp.push_back((v[j] + v[j + 1])%mod);
            }
            temp.push_back(1);
            v = temp;
        }
        return v;
    }
};


//{ Driver Code Starts.


void printAns(vector<ll> &ans) {
    for (auto &x : ans) {
        cout << x << " ";
    }
    cout << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        auto ans = ob.nthRowOfPascalTriangle(n);
        printAns(ans);
    }
    return 0;
}

// } Driver Code Ends