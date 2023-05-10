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
        stack<int> st;
        st.push(A[N - 1]);
        for (int i = N - 2; i >= 0; i--)
        {
            if (st.top() >= A[i])
            st.push(A[i]);
        }
        int ans = 0;
        int mx = 0;
        for (int i = 0; i < N - 1; i++)
        {
            mx = max(mx, A[i]);
            if (st.top() == A[i])
            st.pop();
            int mn = st.top();
            // cout<<mn<<endl;
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