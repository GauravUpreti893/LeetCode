//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++
class Solution{
public:
    vector<long long> smallerSum(int n,vector<int> &arr){
        // Code heren
        vector<int> v = arr;
        sort(v.begin(), v.end());
        vector<long long> sum(n + 1, 0), ans(n, 0);
        long long s = 0;
        for (int i = 0; i < n; i++)
        {
            sum[i] = s;
            s += v[i];
        }
        sum[n] = s;
        for (int i = 0; i < n; i++)
        {
            int idx = lower_bound(v.begin(), v.end(), arr[i]) - v.begin();
            ans[i] = sum[idx];
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        Solution ob; 
        vector<long long> ans=ob.smallerSum(n,arr);
        for(int i=0;i<n;i++){
            if(i!=n-1){
                cout<<ans[i]<<" ";
            }
            else{
                cout<<ans[i]<<endl;
            }
        }
    }
    return 0;
}
// } Driver Code Ends