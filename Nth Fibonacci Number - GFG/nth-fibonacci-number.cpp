// { Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++
class Solution {
  public:
   long long int fibo(int n, long long int* &table)
    {
        if (table[n] == -1)
        {
            table[n] = (fibo(n - 1,table) + fibo(n - 2, table)) % 1000000007;
        }
        return table[n];
    }
    long long int nthFibonacci(long long int n){
        // code here
        long long int *table = new long long int[n + 1];
        for (int i = 0; i <= n; i++)
            table[i] = -1;
        table[0] = 0;
        table[1] = 1;
        return fibo(n,table);
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long int n;
        cin >> n;
        Solution ob;
        cout << ob.nthFibonacci(n) << endl;
    }
    return 0;
}
  // } Driver Code Ends