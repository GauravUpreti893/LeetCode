//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int longestPerfectPiece(int arr[], int N) {
        // code here
        multiset<int> st;
        st.insert(arr[0]);
        int ans = 1;
        int j = 0;
        for (int i = 1; i < N; i++)
        {
            st.insert(arr[i]);
            auto it = st.begin();
            auto itr = st.rbegin();
            while (*itr - *it > 1)
            {
                st.erase(st.find(arr[j++]));
                it = st.begin();
                itr = st.rbegin();
            }
            int m = st.size();
            ans = max(ans, m);
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;
        int arr[N];
        for(int i=0; i<N; i++)
            cin>>arr[i];

        Solution ob;
        cout << ob.longestPerfectPiece(arr,N) << endl;
    }
    return 0;
}
// } Driver Code Ends