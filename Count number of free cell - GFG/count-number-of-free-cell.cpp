//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
//User function Template for C++


class Solution{
  public:
  vector<long long int> countZero(int n, int k, vector<vector<int>>& arr){
      //Code Here
      long long rem = n;
      rem *= n;
      unordered_map<int, int> row, col;
      vector<long long> ans(k);
      for (int i = 0; i < k; i++)
      {
          if (row.find(arr[i][0]) == row.end())
          {
              rem -= (n - col.size());
              row[arr[i][0]] = 1;
          }
          if (col.find(arr[i][1]) == col.end())
          {
              rem -= (n - row.size());
              col[arr[i][1]] = 1;
          } 
          ans[i] = rem;
      }
      return ans;
  }
};

//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<vector<int>> arr(k,vector<int>(2));
        for(int i=0;i<k;i++){
            int x, y;
            cin>>x>>y;
            arr[i][0] = x;
            arr[i][1] = y;
        }
        Solution ob;
        vector<long long int> ans = ob.countZero(n,k,arr);
        
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;    
    }
    
    return 0;
}


// } Driver Code Ends