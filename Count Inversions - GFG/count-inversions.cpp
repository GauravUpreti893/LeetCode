// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
  public:
    // arr[]: Input Array
    // N : Size of the Array arr[]
    // Function to count inversions in the array.
    void merge(long long arr[], long long lo, long long mid, long long hi, long long &count)
    {
        int n = (mid - lo + 1);
        int m = (hi - mid);
        long long int *arr1 = new long long int[n];
        long long int *arr2 = new long long int[m];
        for (int i = 0; i < n; i++)
        {
            arr1[i] = arr[lo + i];
        }
        for (int i = 0; i < m; i++)
        {
            arr2[i] = arr[mid + i + 1];
        }
        int k = lo, i = 0, j = 0;
        while (i < n && j < m)
        {
            if (arr1[i] > arr2[j])
            {
                // count+= j + 1;
                arr[k++] = arr2[j++];
            }
            else
            {
                count += j;
                arr[k++] = arr1[i++];
            }
        }
        while (i < n)
        {
            arr[k++] = arr1[i++];
            count += m;
        }
        while (j < m)
        {
            arr[k++] = arr2[j++];
        }
        // cout<<lo<<" "<<mid<<" "<<hi<<" ";
        // cout<<count<<endl;
        return;
    }
    void mergeSort(long long arr[], long long lo, long long hi, long long& count)
    {
        if (lo < hi)
        {
            long long int mid = (lo + hi)/2;
            mergeSort(arr, lo, mid, count);
            mergeSort(arr, mid + 1, hi, count);
            merge(arr, lo, mid, hi, count);
        }
        return;
    }
    long long int inversionCount(long long arr[], long long N)
    {
        // Your Code Here
        long long int count = 0;
        mergeSort(arr, 0, N - 1, count);
        return count;
    }

};

// { Driver Code Starts.

int main() {
    
    long long T;
    cin >> T;
    
    while(T--){
        long long N;
        cin >> N;
        
        long long A[N];
        for(long long i = 0;i<N;i++){
            cin >> A[i];
        }
        Solution obj;
        cout << obj.inversionCount(A,N) << endl;
    }
    
    return 0;
}
  // } Driver Code Ends