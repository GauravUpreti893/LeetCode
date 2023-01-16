//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
  public:
    // arr[]: Input Array
    // N : Size of the Array arr[]
    // Function to count inversions in the array.
    long long merge(long long nums[], int lo, int mid, int hi)
    {
        vector<long long> a, b;
        for (int i = lo; i <= mid; i++)
        a.push_back(nums[i]);
        for (int i = mid + 1; i <= hi; i++)
        b.push_back(nums[i]);
        int n = a.size(), m = b.size(), i = 0, j = 0, k = lo;
        long long res = 0;
        while ((i < n) && (j < m))
        {
            if (a[i] <= b[j])
            nums[k++] = a[i++];
            else
            {
                res += (n - i);
                nums[k++] = b[j++];
            }
        }
        bool flag = false;
        while (i < n)
        {
            nums[k++] = a[i++];
            flag = true;
        }
        while (j < m)
        {
            nums[k++] = b[j++];
        }
        return res;
    }
    long long inversioncount(long long nums[], int lo, int hi)
    {
        if (lo >= hi)
        {
            return 0;
        }
        long long int res = 0;
        int mid = lo + (hi - lo)/2;
        res += inversioncount(nums, lo, mid);
        res += inversioncount(nums, mid + 1, hi);
        res += merge(nums, lo, mid, hi);
        return res;
    }
    long long int inversionCount(long long arr[], long long N)
    {
        // Your Code Here
        return inversioncount(arr, 0, N - 1);
    }
};

//{ Driver Code Starts.

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