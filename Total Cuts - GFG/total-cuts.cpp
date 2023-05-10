//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int totalCuts(int N,int k,vector<int> &A){
        // Code here
        multiset<int> st;
        for (int i = 0; i < N; i++)
        st.insert(A[i]);
        int ans = 0;
        int mx = 0;
        for (int i = 0; i < N - 1; i++)
        {
            mx = max(mx, A[i]);
            st.erase(st.find(A[i]));
            int mn = *(st.begin());
            if (mx + mn >= k)
            ans++;
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N,K;
        cin>>N>>K;
        vector<int> A(N);
        for(int i=0;i<N;i++){
            cin>>A[i];
        }
        Solution ob;
        cout<<ob.totalCuts(N,K,A)<<endl;
    }
    return 0;
}
// } Driver Code Ends