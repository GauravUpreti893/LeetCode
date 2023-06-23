//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int leastInterval(int N, int K, vector<char> &tasks) {
        // code here
        vector<int> freq(26, 0);
        int mx = 0, ans = 0;
        for (int i =0; i < N; i++)
        {
            freq[tasks[i] - 'A']++;
            mx = max(mx, freq[tasks[i] - 'A']);
        }
        ans = 1 + (mx - 1)*(K + 1);
        for (int i = 0; i < 26; i++)
        {
            if (freq[i] == mx)
            ans++;
        }
        ans--;
        return max(ans, N);
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, K;
        cin >> N >> K;

        vector<char> tasks(N);
        for (int i = 0; i < N; i++) cin >> tasks[i];

        Solution obj;
        cout << obj.leastInterval(N, K, tasks) << endl;
    }
    return 0;
}
// } Driver Code Ends