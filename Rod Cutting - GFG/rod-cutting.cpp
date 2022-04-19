// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// User function Template for C++

class Solution{
  public:
    int cutRod(int price[], int n) {
        //code here
        vector<int> table(n + 1);
        table[0] = 0;
        for (int i = 1; i <= n; i++)
        {
            table[i] = price[i - 1];
            for (int j = 1; j <= i/2; j++)
            {
                table[i] = max(table[i], price[j - 1] + table[i - j]);
            }
        }
        // for (int  i = 0; i <= n; i++)
        // cout<<table[i]<<" ";
        return table[n];
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) 
            cin >> a[i];
            
        Solution ob;

        cout << ob.cutRod(a, n) << endl;
    }
    return 0;
}  // } Driver Code Ends