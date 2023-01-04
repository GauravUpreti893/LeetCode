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
        int i = 0, j;
        if (M != N)
        return 0;
        while (i < M)
        {
            if (S[i] != T[i])
            {
                if (S[i] == 'A' || (T[i] == 'B'))
                return 0;
                j = i;
                if (S[i] == '#')
                {
                    while (i < N && S[i] == '#')
                    {
                        i++;
                    }
                    if (i == N || S[i] == 'B')
                    return 0;
                    swap(S[i], S[j]); // T[i] = 'A' here
                }
                else
                {
                    while (i < N && S[i] == 'B')
                    {
                        i++;
                    }
                    if (i == N || S[i] == 'A')
                    return 0;
                    swap(S[i], S[j]);
                }
                i = j;
            }
            i++;
        }
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