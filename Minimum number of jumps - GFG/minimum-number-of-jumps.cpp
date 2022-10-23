// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// Function to return minimum number of jumps to end of array

class Solution{
  public:
    int minJumps(int arr[], int n){
        // Your code here
        if (n == 1)
        return 0;
        int mx = 0, ans = 0, jump1 = arr[0], tjump, idx;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == 0)
            return -1;
            ans++;
            if ((i + jump1) >= (n - 1))
            return ans;
            mx = 0;
            int count = 1;
            for (int j = i + 1; j <= i + jump1; j++)
            {
                if ((count + arr[j]) > mx)
                {
                    mx = count + arr[j];
                    tjump = arr[j];
                    idx = j;
                }
                count++;
                // cout<<mx<<endl;
            }
            jump1 = tjump;
            i = idx - 1;
        }
        return ans;
    }
};


// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        Solution obj;
        cout<<obj.minJumps(arr, n)<<endl;
    }
    return 0;
}
  // } Driver Code Ends