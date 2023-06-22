//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    bool lemonadeChange(int N, vector<int> &bills) {
        // code here
        int f = 0, t = 0;
        for (int i = 0; i < N; i++)
        {
            int x = bills[i] - 5;
            if (x == 15)
            {
                if (t >=1 && f >= 1)
                {
                    t--;
                    f--;
                }
                else if (f >= 3)
                {
                    f -= 3;
                }
                else
                return false;
            }
            else if (x == 5)
            {
                if (f >= 1)
                f--;
                else
                return false;
                t++;
            }
            else
            f++;
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