//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution{
    public:
    bool check(vector<int> &sweetness, int val, int k)
    {
        int n = sweetness.size(), sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += sweetness[i];
            if (sum >= val)
            {
                k--;
                sum = 0;
                if (!k)
                return true;
            }
        }
        return false;
    }
    int maxSweetness(vector<int>& sweetness, int N, int K) {
    // Write your code here.
        K++;
        long long lo = 1, hi = 1e14, mid, ans;
        while (lo <= hi)
        {
            mid = (lo + hi)/2;
            if (check(sweetness, mid, K))
            {
                ans = mid;
                lo = mid + 1;
            }
            else
            {
                hi = mid - 1;
            }
        }
        return ans;
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> sweetness(n);
        for (int i = 0; i < n; i++) {
            cin >> sweetness[i];
        }
          Solution ob;
          int res=ob.maxSweetness(sweetness, n, k);
        cout << res << endl;
    }
}
// } Driver Code Ends