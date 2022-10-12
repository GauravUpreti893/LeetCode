//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
public:
      string maxSum(string w,char x[], int b[],int n){
          // code here
          unordered_map<char, int> mp;
          char c;
          int m = w.size();
          for (int i = 0; i < 26; i++)
          {
              c = 'A' + i;
              mp[c] = 65 + i;
          }
          for (int i = 0; i < 26; i++)
          {
              c = 'a' + i;
              mp[c] = 97 + i;
          }
          for (int i = 0; i < n; i++)
          {
              mp[x[i]] = b[i];
          }
          int sum = 0, ans = -1001, p1, p2, st = 0;
          for (int i = 0; i < m; i++)
          {
              sum += mp[w[i]];
              if (sum > ans)
              {
                  ans = sum;
                  p1 = st;
                  p2 = i;
              }
              if (sum < 0)
              {
                  sum = 0;
                  st = i + 1;
              }
          }
          string s;
          for (int i = p1; i <= p2; i++)
          {
              s += w[i];
          }
          return s;
      }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string w;
        cin>>w;
        int n;
        cin>>n;
        char x[n];
        int b[n];
        for(int i = 0;i<n;i++)
            cin>>x[i];
        for(int i = 0;i<n;i++)
            cin>>b[i];
        Solution ob;
        cout << ob.maxSum(w,x,b,n) << endl;
    }
    return 0; 
}
// } Driver Code Ends