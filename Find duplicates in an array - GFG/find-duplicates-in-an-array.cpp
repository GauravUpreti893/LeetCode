//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
  public:
    vector<int> duplicates(int arr[], int n) {
        // code here
        vector<int> ans;
        int mx = 0;
        for (int i = 0; i < n; i++)
        {
            arr[i]++;
            mx = max(mx, arr[i]);
        }
        mx++;
        for (int i = 0; i < n; i++)
        {
            int x = (abs(arr[i]) - 1)%mx;
            if (arr[x] > 0)
            arr[x] *= -1;
            else if (arr[x] < 0 && -arr[x] < mx)
            {
                arr[x] = -(-arr[x] + mx);
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (arr[i] < 0 && -arr[i] >= mx)
            ans.push_back(i);
        }
        if (ans.size() == 0)
        {
            ans.push_back(-1);
            return ans;
        }
        return ans;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        Solution obj;
        vector<int> ans = obj.duplicates(a, n);
        for (int i : ans) cout << i << ' ';
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends