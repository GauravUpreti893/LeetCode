//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
typedef tree<int, null_type, less_equal<int>,
             rb_tree_tag,
             tree_order_statistics_node_update>
    ordered_set;
class Solution{
public:
  long long countSubstring(string S){
    // code here
    int n = S.size();
    vector<int> arr(n);
    long long sum = 0, count = 0;
    for (int i = 0; i < n; i++)
    {
        sum += (S[i] == '1') ? 1 : -1;
        arr[i] = sum;
        if (sum > 0)
        count++;
    }
    ordered_set st;
    st.insert(arr[0]);
    for (int i = 1; i < n; i++)
    {
        st.insert(arr[i]);
        count += st.order_of_key(arr[i]);
    }
    return count;
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