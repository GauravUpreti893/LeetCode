//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution
{
  public:
  int maxWeightCell(int N, vector<int>& Edge)
  {
      // code here
      int ans = 0, mxval = 0;
      unordered_map<int, int> mp;
      for (int i = 0; i < N; i++)
      {
          if (Edge[i] != -1)
          mp[Edge[i]] += i;
      }
      for (auto it = mp.begin(); it != mp.end(); it++)
      {
          if (it->second > mxval)
          {
              mxval = it->second;
              ans = it->first;
          }
          else if (it->second == mxval && it->first > ans)
          {
              ans = it->first;
          }
      }
      
      return ans;
  }
};

//{ Driver Code Starts.
int main(){
   int tc;
   cin >> tc;
   while(tc--){
      int N;
      cin >> N;
      vector<int> Edge(N);
      for(int i=0;i<N;i++){
        cin>>Edge[i];
      }
      Solution obj;
      int ans=obj.maxWeightCell(N, Edge);
      cout<<ans<<endl;
   }
   return 0;
}
// } Driver Code Ends