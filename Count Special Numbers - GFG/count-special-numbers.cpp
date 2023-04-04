//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int countSpecialNumbers(int n, vector<int> arr) {
        // Code here
        int m = 0;
        for (int i = 0; i < n; i++)
        {
            m = max(m, arr[i]);
        }
        vector<int> present(m + 1, 0);
        for (int i = 0; i < n; i++)
        {
            present[arr[i]]++;
        }
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            bool flag = false;
            for (int j = 1; j < arr[i]; j++)
            {
                if (present[j] && arr[i] % j == 0)
                {
                    flag = true;
                    break;
                }
            }
            if (present[arr[i]] > 1)
            flag = true;
            if (flag)
            ans++;
        }
        return ans;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<int> arr(N);
        for (int i = 0; i < N; i++) {
            cin >> arr[i];
        }

        Solution ob;
        cout << ob.countSpecialNumbers(N, arr) << endl;
    }
    return 0;
}
// } Driver Code Ends