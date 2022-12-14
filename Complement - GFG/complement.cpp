//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
    vector<int> findRange(string str, int n) {
        // code here
        int st = 0, mx = -1, p1 = 0, p2 = 0, sum = 0;
        for (int i = 0; i < n; i++)
        {
            if (str[i] == '1')
            sum--;
            else
            sum++;
            if (sum > mx)
            {
                mx = sum;
                p1 = st;
                p2 = i;
            }
            if (sum < 0)
            {
                sum = 0;
                st = i + 1;
            }
        }
        if (mx == -1)
        {
            vector<int> ans{-1};
            return ans;
        }
        vector<int> ans(2);
        ans[0] = p1 + 1;
        ans[1] = p2 + 1;
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        Solution ob;
        auto ans = ob.findRange(s, n);

        if (ans.size() == 1) {
            cout << ans[0] << "\n";
        } else {
            cout << ans[0] << " " << ans[1] << "\n";
        }
    }
    return 0;
}
// } Driver Code Ends