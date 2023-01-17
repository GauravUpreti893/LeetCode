//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution{
public:
    long long countInversion(vector<long long> &arr, int lo, int hi)
    {
        if (lo >= hi)
        return 0;
        int mid = lo + (hi - lo)/2;
        return countInversion(arr, lo, mid) + countInversion(arr, mid + 1, hi) + merge(arr, lo, mid, hi);
    }
    long long merge(vector<long long> &arr, int lo, int mid, int hi)
    {
        vector<long long> a, b;
        for (int i = lo; i <= mid; i++)
        {
            a.push_back(arr[i]);
        }
        for (int i = mid + 1; i <= hi; i++)
        {
            b.push_back(arr[i]);
        }
        int n = a.size(), m = b.size(), i = 0, j = 0, k = lo;
        long long res = 0;
        while ((i < n) && (j < m))
        {
            if (a[i] < b[j])
            {
                res += m - j;
                arr[k++] = a[i++];
            }
            else
            {
                arr[k++] = b[j++];
            }
        }
        while (i < n)
        {
            arr[k++] = a[i++];
        }
        while (j < m)
        {
            arr[k++] = b[j++];
        }
        return res;
    }
  long long countSubstring(string S){
    // code here
    int n = S.size();
    long long sum = 0;
    vector<long long> prefixsum(n);
    long long int count = 0;
    for (int i = 0; i < n; i++)
    {
        sum += (S[i] == '1') ? 1 : -1;
        prefixsum[i] = sum;
        if (sum > 0)
        count++;
    }
    return count + countInversion(prefixsum, 0, n - 1);
  }
};

//{ Driver Code Starts.
int main() {
 ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL); 
 int t=1;
 cin>>t;
 for(int i=1;i<=t;i++){
    string S;
    cin>>S;
    Solution obj;
    long long ans =obj.countSubstring(S);
    cout<<ans<<endl;
 }
}
// } Driver Code Ends