//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int isItPossible(string S, string T, int M, int N) {
        // code here
        if (M != N)
        return 0;
        int i = 0, j = 0;
        while (i < N && S[i] == '#')
           i++;
           while (j < N && T[j] == '#')
           j++;
        while (i < N && j < N)
        {
           if (S[i] != T[j])
           return 0;
           i++;
           j++;
           while (i < N && S[i] == '#')
           i++;
           while (j < N && T[j] == '#')
           j++;
        }
        if (i < N || j < N)
        return 0;
        return 1;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string S, T;
        cin >> S >> T;
        int M = S.length(), N = T.length();
        Solution ob;
        cout << ob.isItPossible(S, T, M, N);
        cout << "\n";
    }
}
// } Driver Code Ends