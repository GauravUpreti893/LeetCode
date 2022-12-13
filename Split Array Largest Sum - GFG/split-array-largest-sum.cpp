//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
  bool check(int* arr, int n, int sum, int k)
  {
      int s = 0;
      for (int i = 0; i < n; i++)
      {
          if (s + arr[i] > sum)
          {
              k--;
              if (!k)
              {
                  return false;
              }
              s = 0;
              i--;
          }
          else
          {
              s += arr[i];
          }
      }
      if (s > sum)
      {
          k--;
          if (!k)
          {
              return false;
          }
      }
      return true;
  }
    int splitArray(int arr[] ,int N, int K) {
        // code here
        int lo = 1, hi = 1e9 , mid, ans;
        while (lo <= hi)
        {
            mid = lo + (hi - lo)/2;
            if (check(arr, N, mid, K))
            {
               hi = mid - 1; 
               ans = mid;
            }
            else
            {
                lo = mid + 1;
            }
        }
        return lo;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, K;
        
        cin>>N>>K;
        int arr[N];
        
        for(int i=0 ; i<N ; i++)
            cin>>arr[i];

        Solution ob;
        cout<<ob.splitArray(arr,N,K);
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends