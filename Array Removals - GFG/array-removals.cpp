//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    int removals(vector<int>& arr, int k){
        //Code here
        sort(arr.begin(), arr.end());
        int n = arr.size();
        if (arr[n - 1] - arr[0] <= k)
        return 0;
        int ans = INT_MAX, idx;
        for (int i = n - 1; i >= 0; i--)
        {
            idx = lower_bound(arr.begin(), arr.end(), arr[i] - k) - arr.begin();
            ans = min(ans, idx + n - 1 - i);
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
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        
        Solution ob;
        int ans = ob.removals(arr,k);
        
        cout<<ans<<endl;
    }
}



// } Driver Code Ends