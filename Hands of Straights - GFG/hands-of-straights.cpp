//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    bool isStraightHand(int n, int k, vector<int> &hand) {
        // code here
        if (n % k)
        return false;
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            mp[hand[i]]++;
        }
        vector<int> arr;
        for (auto it = mp.begin(); it != mp.end(); it++)
        {
            arr.push_back(it->first);
        }
        int m = arr.size();
        int i = 0;
        while (i <= m - k)
        {
            int mn = mp[arr[i]];
            mp[arr[i]] = 0;
            int x = arr[i];
            for (int j = x + 1; j < x + k; j++)
            {
                if (mp[j] < mn)
                return false;
                mp[j] -= mn;
            }
            i++;
        }
        for (int i = m - k + 1; i < m; i++)
        {
            if (mp[arr[i]])
            return false;
        }
        return true;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, groupSize;
        cin >> N >> groupSize;

        vector<int> hand(N);
        for (int i = 0; i < N; i++) cin >> hand[i];

        Solution obj;
        int ans = obj.isStraightHand(N, groupSize, hand);
        if (ans)
            cout << "True" << endl;
        else
            cout << "False" << endl;
    }
    return 0;
}
// } Driver Code Ends