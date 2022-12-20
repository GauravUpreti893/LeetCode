//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 



// } Driver Code Ends
class Solution{
  public:
    int maxDistance(int arr[], int n) 
    { 
        // Complete the function
        int a = -1e6, b = 1e7, a1 = -1e6, b1 = 1e7;
        for (int i = 0; i < n; i++)
        {
            a = max(a, arr[i] + i);
            b = min(b, arr[i] + i);
            a1 = max(a1, arr[i] - i);
            b1 = min(b1, arr[i] - i);
        }
        // cout<<a1<<" "<<b1<<endl;
        return max(a - b, a1 - b1);
    } 
};

//{ Driver Code Starts.
int main() 
{ 
	int T;
	cin>>T;
	while(T--){
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i = 0; i<n; i++)
	        cin>>arr[i];
	    Solution obj;
	    cout<<obj.maxDistance(arr, n)<<endl;
	}
} 

// } Driver Code Ends