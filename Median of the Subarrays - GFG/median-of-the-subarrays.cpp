//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution {
  public:
    long long count(vector<int> &arr, int M)
    {
        unordered_map<int, int> mp;
        int n = arr.size();
        int sum = 0;
        mp[0] = 1;
        long long x = 0, ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] >= M)
            {
                x += mp[sum];
                sum++;
            }
            else
            {
                sum--;
                x -= mp[sum];
            }
            ans += x;
            mp[sum]++;
        }
        return ans;
    }
    long long countSubarray(int N,vector<int> A,int M) {
        // code here
        return count(A, M) - count(A, M + 1);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, M;
        cin>>N>>M;
        vector<int> A(N);
        for(int i=0;i<N;i++){
            cin>>A[i];
        }
        Solution obj;
        auto ans = obj.countSubarray(N,A,M);
        cout<<ans<<endl;
    }
}  
// } Driver Code Ends