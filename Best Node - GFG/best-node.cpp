//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


class Array
{
public:
    template <class T>
    static void input(vector<T> &A,int n)
    {
        for (int i = 0; i < n; i++)
        {
            scanf("%d ",&A[i]);
        }
    }

    template <class T>
    static void print(vector<T> &A)
    {
        for (int i = 0; i < A.size(); i++)
        {
            cout << A[i] << " ";
        }
        cout << endl;
    }
};


// } Driver Code Ends
class Solution {
  public:
    long long ans;
    pair<long long, long long> dfs(vector<vector<int>> &adj, vector<int> &A, int parent)
    {
        long long mn = 1e10, mx = -1e10;
        for (auto child : adj[parent])
        {
            pair<long long, long long> res = dfs(adj, A, child);
            mn = min(mn, res.first);
            mx = max(mx, res.second);
        }
        long long parentval = A[parent - 1];
        if (mn == 1e10)
        {
            ans = max(ans, parentval);
            return {parentval, parentval};
        }
        ans = max(ans, parentval - mn);
        // ans = max(ans, parentval - mx);
        return {parentval - mx, parentval - mn};
    }
    long long bestNode(int N, vector<int> &A, vector<int> &P) {
        // code here
        ans = -1e10;
        vector<vector<int>> adj(N + 1);
        for (int i = 1; i < N; i++)
        {
            int p = P[i];
            adj[p].push_back(i + 1);
        }
        dfs(adj, A, 1);
        return ans;
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        int N;
        scanf("%d",&N);
        
        
        vector<int> A(N);
        Array::input(A,N);
        
        
        vector<int> P(N);
        Array::input(P,N);
        
        Solution obj;
        long long res = obj.bestNode(N, A, P);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends