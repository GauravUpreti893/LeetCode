//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int longestPerfectPiece(int arr[], int N) {
        // code here
        multiset<int> st;
        int ans = 0;
        set<int> :: iterator it;
        set<int> :: reverse_iterator itr;
        int start = 0;
        for (int i = 0; i < N; i++)
        {
            st.insert(arr[i]);
            it = st.begin();
            itr = st.rbegin();
            while (*itr - *it > 1)
            {
                st.erase(st.find(arr[start++]));
                it = st.begin();
                itr = st.rbegin();
            }
            ans = max(ans, i - start + 1);
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