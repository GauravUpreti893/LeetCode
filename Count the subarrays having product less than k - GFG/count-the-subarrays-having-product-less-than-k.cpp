//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends


class Solution{
  public:
    int countSubArrayProductLessThanK(const vector<int>& a, int n, long long k) {
        long long prod = 1;
        if (k == 1)
        return 0;
        int i = -1, st = 0, ans = 0, sub = 0;
        while (i < n)
        {
            while (i < n && prod < k)
            {
                i++;
                prod *= (long long)a[i];
            }
            int x = i - st;
            ans += x*(x + 1)/2 - sub;
            while (st <= i && prod >= k)
            {
                prod /= (long long)a[st++];
            }
            x = i - st;
            sub = x*(x + 1)/2;
        }
        int x = n - st;
        ans += x * (x + 1)/2 - sub;
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        long long int k;
        cin >> n >> k;
        vector<int> arr(n);
        for (i = 0; i < n; i++) cin >> arr[i];
        Solution obj;
        cout << obj.countSubArrayProductLessThanK(arr, n, k) << endl;
    }
    return 0;
}

// } Driver Code Ends