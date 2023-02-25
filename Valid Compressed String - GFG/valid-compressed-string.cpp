//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int checkCompressed(string S, string T) {
        // code here
        int n = S.size(), m = T.size();
        int i = 0, j = 0;
        while (i < n && j < m)
        {
            // cout<<S[i]<<endl;
            if (T[j] >= '0' && T[j] <= '9')
            {
                int no = 0;
                while (j < m && T[j] >= '0' && T[j] <= '9')
                {
                    no = no *10 + T[j++] - '0';
                }
                j--;
                for (int k = 0; k < no - 1; k++)
                {
                    i++;
                }
                if (no == 0)
                i--;
                if (i > n)
                return 0;
            }
            else if (S[i] != T[j])
            return 0;
            j++;
            i++;
        }
        if (i == n && j == m)
        return 1;
        return 0;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string S,T;
        
        cin>>S>>T;

        Solution ob;
        cout << ob.checkCompressed(S,T) << endl;
    }
    return 0;
}
// } Driver Code Ends