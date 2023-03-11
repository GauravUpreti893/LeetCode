//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> solveQueries(int n, int num, vector<int> &A, vector<vector<int>> &Q) {
        // code here
        vector<int> ans(num, 0);
        for (int i = 0; i < num; i++)
        {
            int l = Q[i][0];
            int r = Q[i][1];
            int k = Q[i][2];
            unordered_map<int, int> freq;
            for (int j = n - 1; j > r; j--)
            {
                freq[A[j]]++;
            }
            for (int j = r; j >= l; j--)
            {
                freq[A[j]]++;
                if (freq[A[j]] == k)
                ans[i]++;
            }
        }
        return ans;
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int num;
        cin>>num;
        vector<int> A(N);
        for(int i=0;i<N;i++){
            cin>>A[i];
        }
        vector<vector<int>> Q(num, vector<int>(3));
        for(int i=0;i<num;i++){
            for(int j=0;j<3;j++){
                cin>>Q[i][j];
            }
        }
        Solution obj;
        vector<int> res = obj.solveQueries(N, num, A, Q);
        
        for(auto ele:res){
            cout<<ele<<" ";
        }
        cout<<endl;
    }
}

// } Driver Code Ends