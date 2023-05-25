//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    void combination(string &s, vector<string> &ans, int idx, int target, string str)
    {
        int n = s.size();
        if (idx == n)
        {
            stack<long long> st;
            int m = str.size();
            int i = 0;
            int prev = 0;
            while (i < m)
            {
                long long no = 0;
                while (i < m && str[i] >= '0' && str[i] <= '9')
                {
                    no = no * 10 + (str[i] - '0');
                    i++;
                }
                if (prev == 0)
                {
                    st.push(no);
                }
                else if (prev == 1)
                {
                    st.push(-no);
                }
                else
                {
                    long long res = st.top();
                    st.pop();
                    res*= no;
                    st.push(res);
                }
                if (i < m && str[i] == '*')
                {
                    prev = 2;
                }
                else if (i < m && str[i] == '-')
                {
                    prev = 1;
                }
                else if (i < m && str[i] == '+')
                {
                    prev = 0;
                }
                i++;
            }
            long long sum = 0;
            while (!st.empty())
            {
                sum += st.top();
                st.pop();
            }
            // cout<<str<<endl;
            if (sum == target)
            {
                ans.push_back(str);
            }
            return;
        }
        if (s[idx] == '0')
        {
            if (idx == n - 1)
            {
                combination(s, ans, idx + 1, target, str + "0");
                return;
            }
            combination(s, ans, idx + 1, target, str + "0" + "+");
            combination(s, ans, idx + 1, target, str + "0" + "-");
            combination(s, ans, idx + 1, target, str + "0" + "*");
            return;
        }
        for (int i = idx; i < n - 1; i++)
        {
            str += s[i];
            combination(s, ans, i + 1, target, str + "+");
            combination(s, ans, i + 1, target, str + "-");
            combination(s, ans, i + 1, target, str + "*");
        }
        str += s[n - 1];
        combination(s, ans, n, target, str);
        return;
    }
    vector<string> addOperators(string S, int target) {
        // code here
        int n = S.size();
        vector<string> ans;
        combination(S, ans, 0, target, "");
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int target;
        string S;
        cin >> S >> target;

        Solution obj;
        vector<string> ans = obj.addOperators(S, target);
        sort(ans.begin(), ans.end());
        for (auto &it : ans) cout << it << ' ';
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends