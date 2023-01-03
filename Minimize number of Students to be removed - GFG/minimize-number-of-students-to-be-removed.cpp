//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int removeStudents(int H[], int N) {
        // code here
        vector<int> lis{H[0]};
        int size = 1;
        for (int i = 1; i < N; i++)
        {
            if (lis[size - 1] < H[i])
            {
                lis.push_back(H[i]);
                size++;
            }
            else
            {
                int idx = lower_bound(lis.begin(), lis.end(), H[i]) - lis.begin();
                lis[idx] = H[i];
            }
        }
        return N - size;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin>>N;
        
        int H[N];
        for(int i=0; i<N; i++)
            cin>>H[i];

        Solution ob;
        cout << ob.removeStudents(H,N) << endl;
    }
    return 0;
}
// } Driver Code Ends