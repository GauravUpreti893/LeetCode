//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    vector<string> CamelCase(int N, vector<string>& Dictionary, string Pattern) {
        // code here
        int m = Dictionary.size();
        unordered_map<string, vector<int>> mp;
        for (int i = 0; i < m; i++)
        {
            int m1 = Dictionary[i].size();
            string str;
            for (int j = 0; j < m1; j++)
            {
                if (Dictionary[i][j] >= 'A' && Dictionary[i][j] <= 'Z')
                {
                    str += Dictionary[i][j];
                    mp[str].push_back(i);
                }
            }
        }
        vector<string> ans;
        for (auto i : mp[Pattern])
        {
            ans.push_back(Dictionary[i]);
        }
        if (ans.size() == 0)
        ans.push_back("-1");
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
        vector<string> Dictionary(N);
        for (int i = 0; i < N; i++) cin >> Dictionary[i];
        string Pattern;
        cin >> Pattern;
        Solution ob;
        vector<string> ans = ob.CamelCase(N, Dictionary, Pattern);
        sort(ans.begin(), ans.end());
        for (auto u : ans) cout << u << " ";
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends