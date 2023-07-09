//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to find the smallest positive number missing from the array.
    int missingNumber(int arr[], int n) 
    { 
        // Your code here
        int i = -1;
        for (int j = 0; j < n; j++)
        {
            if (arr[j] <= 0)
            {
                i++;
                swap(arr[i], arr[j]);
            }
        }
        for (int j = 0; j <= i; j++)
        {
            arr[j] = -arr[j];
            if (arr[j] == 0)
            arr[j] = 1;
        }
        i++;
        for (; i < n; i++)
        {
            int x = abs(arr[i]);
            if (x <= n && arr[x - 1] > 0)
            arr[x - 1] = -arr[x - 1];
        }
        for (int i = 0; i < n; i++)
        {
            if (arr[i] > 0)
            return i + 1;
        }
        return n + 1;
    } 
};

//{ Driver Code Starts.

int missingNumber(int arr[], int n);

int main() { 
    
    //taking testcases
    int t;
    cin>>t;
    while(t--){
        
        //input number n
        int n;
        cin>>n;
        int arr[n];
        
        //adding elements to the array
        for(int i=0; i<n; i++)cin>>arr[i];
        
        Solution ob;
        //calling missingNumber()
        cout<<ob.missingNumber(arr, n)<<endl;
    }
    return 0; 
} 
// } Driver Code Ends