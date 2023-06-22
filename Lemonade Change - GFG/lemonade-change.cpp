//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    bool lemonadeChange(int N, vector<int> &bills) {
        // code here
        map<int, int, greater<int>> mp;
        mp[5] = 0;
        mp[10] = 0;
        mp[15] = 0;
        for (int i = 0; i < N; i++)
        {
            int x = bills[i] - 5;
            if (x)
            {
                for (auto it = mp.begin(); it != mp.end(); it++)
                {
                    int n = x / (it->first);
                    if (it->second >= n)
                    {
                        it->second -= n;
                        x = x % (it->first);
                    }
                    else
                    {
                        x = x - (it->first)*(it->second);
                        it->second = 0;
                    }
                    if (!x)
                    break;
                }
                if (x)
                return false;
            }
            mp[bills[i]]++;
        }
        return true;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;

        vector<int> bills(N);
        for (int i = 0; i < N; i++) cin >> bills[i];

        Solution obj;
        int ans = obj.lemonadeChange(N, bills);
        if (ans)
            cout << "True" << endl;
        else
            cout << "False" << endl;
    }
    return 0;
}
// } Driver Code Ends