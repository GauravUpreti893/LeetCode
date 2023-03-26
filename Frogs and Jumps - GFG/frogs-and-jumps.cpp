//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int unvisitedLeaves(int N, int leaves, int frogs[]) {
        // Code here
        bitset<100001> bst;
        sort(frogs, frogs + N);
        if (frogs[0] == 1)
        return 0;
        for (int i = 0; i < N; i++)
        {
            if (frogs[i] <= leaves && !bst[frogs[i]])
            {
                for (int j = frogs[i]; j <= leaves; j += frogs[i])
                {
                    bst[j] = 1;
                }
            }
        }
        return leaves - bst.count();
    }
};


//{ Driver Code Starts.


int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, leaves;
        cin >> N >> leaves;
        int frogs[N];
        for (int i = 0; i < N; i++) {
            cin >> frogs[i];
        }

        Solution ob;
        cout << ob.unvisitedLeaves(N, leaves, frogs) << endl;
    }
}
// } Driver Code Ends