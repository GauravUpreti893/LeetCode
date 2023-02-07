//{ Driver Code Starts
//Initial Template for C++



#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
    public:
        // Function to return the length of the
        //longest subarray with ppositive product
        int maxLength(vector<int> &arr,int n){
           //code here
           int i = 0, ans = 0;
           while (i < n)
           {
               int j = i, neg = 0, firstneg = -1, lastneg;
               while (i < n && arr[i])
               {
                   if (arr[i] < 0)
                   {
                       neg++;
                       if (firstneg == -1)
                       {
                           firstneg = i;
                       }
                       lastneg = i;
                   }
                   i++;
               }
               if (neg % 2 == 0)
               ans = max(ans, i - j);
               else
               {
                   ans = max({ans, firstneg - j, i - firstneg - 1, lastneg - j, i - lastneg - 1});
               }
               i++;
           }
           return ans;
        }
};

//{ Driver Code Starts.

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int> arr(n);
	    for(int i = 0;i<n;i++){
	        cin>>arr[i];
	    }
	    Solution ob;
	    int res = ob.maxLength(arr,n);
	    cout<<res<<"\n";
	}
	return 0;
}
// } Driver Code Ends