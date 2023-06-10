//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
#define ll long long

// } Driver Code Ends
class Solution
{
    public:
        void merge(int *arr, int lo, int mid, int hi)
        {
            int idx = lo, idx1 = mid + 1;
            while (idx <= mid && arr[idx] < 0)
            {
                idx++;
            }
            while (idx1 <= hi && arr[idx1] < 0)
            {
                idx1++;
            }
            reverse(arr + idx, arr + mid + 1);
            reverse(arr + mid + 1, arr + idx1);
            reverse(arr + idx, arr + idx1);
            return;
        }
        void mergeSort(int *arr, int lo, int hi)
        {
            if (lo < hi)
            {
                int mid = (lo + hi)/2;
                mergeSort(arr, lo, mid);
                mergeSort(arr, mid + 1, hi);
                merge(arr, lo, mid, hi);
            }
            return;
        }
        void Rearrange(int arr[], int n)
        {
            // Your code goes here
            mergeSort(arr, 0, n - 1);
            return;
        }
};

//{ Driver Code Starts.
void Rearrange(int arr[], int n);

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        cin>>arr[i];
        long long j=0;
        Solution ob;
        ob.Rearrange(arr, n);
      
        for (int i = 0; i < n; i++) 
            cout << arr[i] << " "; 
        cout << endl;  
    }
    return 0; 
} 
// } Driver Code Ends