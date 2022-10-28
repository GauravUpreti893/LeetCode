//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
  int find(vector<int> &arr, int lo, int hi, int v)
  {
      int mid;
      while (lo <= hi)
      {
          mid = (lo + hi)/2;
          if (arr[mid] == v)
          {
            //   cout<<mid<<endl;
              return mid;
          }
          else if (arr[mid] > v)
          {
              hi = mid - 1;
          }
          else
          {
              lo = mid + 1;
          }
      }
      return -1;
  }
  void findleaf(int* arr, vector<int>&inorder, int n, int lo, int hi, int &idx, vector<int> &ans)
  {
      if (lo > hi || idx == n)
      return;
      int mid = find(inorder, lo, hi, arr[idx]);
    //   cout<<mid<<" "<<lo<<" "<<hi<<endl;
      if (mid == -1)
      return;
      if (lo == hi)
      {
          ans.push_back(arr[idx++]);
          return;
      }
      idx++;
      findleaf(arr, inorder, n, lo, mid - 1, idx, ans);
      findleaf(arr, inorder, n, mid + 1, hi, idx, ans);
      return;
  }
    vector<int> leafNodes(int arr[],int N) {
        // code here
        vector<int> ans;
        vector<int> inorder(N);
        for (int i = 0; i < N; i++)
        inorder[i] = arr[i];
        sort(inorder.begin(), inorder.end());
        int idx = 0;
        findleaf(arr, inorder, N, 0, N - 1, idx, ans);
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin >> N;
        int arr[N];
        for(int i=0;i<N;i++)cin>>arr[i];
        Solution ob;
        vector<int>ans=ob.leafNodes(arr,N);
        for(int i=0;i<ans.size();i++)cout<<ans[i]<<" ";
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends