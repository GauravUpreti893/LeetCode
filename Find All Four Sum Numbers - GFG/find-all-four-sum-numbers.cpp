//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution{
    public:
    // arr[] : int input array of integers
    // k : the quadruple sum required
    vector<vector<int> > fourSum(vector<int> &arr, int K) {
        // Your code goes here
        sort(arr.begin(), arr.end());
        vector<vector<int>> ans;
        int n = arr.size();
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n - 2; j++)
            {
                int k = j + 1, l = n - 1, sum = K - arr[i] - arr[j];
                while (k < l)
                {
                   if (arr[k] + arr[l] == sum)
                   {
                       ans.push_back({arr[i], arr[j], arr[k], arr[l]});
                       int x = arr[k];
                       while ((k < l) && (arr[k] == x))
                       k++;
                       x = arr[l];
                       while ((l > k) && (arr[l] == x))
                        l--;
                   }
                    else if (arr[k] + arr[l] > sum)
                    l--;
                    else
                    k++;
                }
                j++;
                while (j < n - 2 && arr[j] == arr[j - 1])
                j++;
                j--;
            }
            i++;
            while (i < n - 1 && arr[i] == arr[i- 1])
            i++;
            i--;
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k, i;
        cin >> n >> k;
        vector<int> a(n);
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        vector<vector<int> > ans = ob.fourSum(a, k);
        for (auto &v : ans) {
            for (int &u : v) {
                cout << u << " ";
            }
            cout << "$";
        }
        if (ans.empty()) {
            cout << -1;
        }
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends