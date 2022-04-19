// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// User function Template for C++

class Solution{
  public:
  int cut(int *price, int n, vector<int> &table)
  {
      if (table[n] != -1)
      return table[n];
      table[n] = price[n - 1];
      for (int i = 1; i < n; i++)
      {
          table[n] = max(table[n],price[i - 1] + cut(price, n - i, table));
      }
      return table[n];
  }
    int cutRod(int price[], int n) {
        //code here
        vector<int> table(n + 1, -1);
        table[0] = 0;
        table[1] = price[0];
        return cut(price, n,table);
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